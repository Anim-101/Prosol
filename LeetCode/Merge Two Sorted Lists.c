#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
}
*firstNode = NULL, *secondNode = NULL;

void Display(struct ListNode *pointNode)
{
    while(pointNode != NULL)
    {
        printf("%d ", pointNode->val);

        pointNode = pointNode->next;
    }
}

void createNodesFirst(int array [], int numberOfNodes)
{
    struct ListNode *tempNode, *lastNode;

    firstNode = (struct Node *) malloc(sizeof(struct ListNode));

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

void createNodesSecond(int array [], int numberOfNodes)
{
    struct ListNode *tempNode, *lastNode;

    secondNode = (struct ListNode *) malloc(sizeof(struct ListNode));

    secondNode->val = array[0];

    secondNode->next = NULL;

    lastNode = secondNode;

    for(int i = 1; i < numberOfNodes; i++)
    {
        tempNode = (struct ListNode *) malloc(sizeof(struct ListNode));

        tempNode->val = array[i];

        tempNode->next = NULL;

        lastNode->next = tempNode;

        lastNode = tempNode;
    }
}

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *tempNode = NULL, *lastNode = NULL;

    if(l1 == NULL && l2 == NULL)
    {
        return NULL;
    }
    else if(l1 == NULL && l2 != NULL)
    {
        return l2;
    }
    else if(l1 != NULL && l2 == NULL)
    {
        return l1;
    }

    if(l1->val < l2->val)
    {
        tempNode = lastNode = l1;

        l1 = l1->next;

        tempNode->next = NULL;
    }
    else
    {
        tempNode = lastNode = l2;

        l2 = l2->next;

        tempNode->next = NULL;
    }

    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {
            lastNode->next = l1;

            lastNode = l1;

            l1 = l1->next;

            lastNode->next = NULL;
        }
        else
        {
            lastNode->next = l2;

            lastNode = l2;

            l2 = l2->next;

            lastNode->next = NULL;
        }
    }

    if(l1)
    {
        lastNode->next = l1;
    }

    if(l2)
    {
        lastNode->next = l2;
    }

    return tempNode;
}

int main()
{
    int arrayOne [] = {1, 2, 4};

    int arrayTwo [] = {1, 3, 4};

    printf("\nDisplaying First Linked List: ");

    createNodesFirst(arrayOne, 3);

    Display(firstNode);

    printf("\n");

    printf("\nDisplaying Second Linked List: ");

    createNodesSecond(arrayTwo, 3);

    Display(secondNode);

    printf("\n");

    printf("\nDisplaying Linked List After Merging Two Sorted Linked List: ");

    Display(mergeTwoLists(firstNode, secondNode));

    printf("\n");

    return 0;
}
