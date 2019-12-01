#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
}
*firstNode = NULL;

void createNodes(int array[], int numberOfNodes)
{
    struct ListNode *tempNode, *lastNode;

    firstNode = (struct ListNode *) malloc(sizeof(struct ListNode *));

    firstNode->val = array[0];

    firstNode->next = NULL;

    lastNode = firstNode;

    for(int i = 1; i < numberOfNodes; i++)
    {
        tempNode = (struct ListNode *) malloc(sizeof(struct ListNode));

        tempNode->val = array[i];

        tempNode->next = NULL;

        lastNode->next = tempNode;

        lastNode = tempNode;
    }
}


void displayNodes(struct ListNode *pointNode)
{
    while(pointNode != NULL)
    {
        printf("%d ", pointNode->val);

        pointNode = pointNode->next;
    }
}

struct ListNode * reverseListNodes(struct ListNode *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        struct ListNode *reverse = NULL, *current = NULL;

        current = head;

        struct ListNode *tempNode = NULL;

        while(current != NULL)
        {
            tempNode = current->next;

            current->next = reverse;

            reverse = current;

            current = tempNode;
        }

        return reverse;
    }
}

int main()
{
    int array [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    createNodes(array, 10);

    displayNodes(firstNode);

    struct ListNode *reverse;

    reverse = reverseListNodes(firstNode);

    printf("\n");

    displayNodes(reverse);

    return 0;
}
