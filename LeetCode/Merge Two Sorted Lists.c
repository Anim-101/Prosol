#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
    int val;
    struct Node *next;
}
*firstNode = NULL, *secondNode = NULL;

void displayNodes(struct ListNode *pointNode)
{
    while(pointNode != NULL)
    {
        printf("%d ", pointNode->val);

        pointNode = pointNode->next;
    }
}

void createNodesFirst(int array[], int numberOfNodes)
{
    struct ListNode *tempNode, *lastNode;

    firstNode = (struct ListNode *) malloc(sizeof(struct ListNode));

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

void createNodesSecond(int array[], int numberOfNodes)
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

struct Node * mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *lastNode, *thirdNode;

    lastNode = NULL;

    thirdNode = NULL;

    if(l1 == NULL && l2 == NULL)
    {
        thirdNode = NULL;
    }
    else
    {
        if(l1 != NULL & l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                thirdNode = lastNode = l1;

                l1 = l1->next;

                thirdNode->next = NULL;
            }
            else
            {
                thirdNode = lastNode = l2;

                l2 = l2->next;

                thirdNode->next = NULL;
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
        }
        else
        {
            if(l1 == NULL && l2 != NULL)
            {
                thirdNode = lastNode = l2;

                l2 = l2->next;

                thirdNode->next = NULL;

                while(l2)
                {
                    lastNode->next = l2;

                    lastNode = l2;

                    l2 = l2->next;

                    lastNode->next = NULL;
                }
            }
            else if(l1 != NULL && l2 == NULL)
            {

                thirdNode = lastNode = l1;

                l1 = l1->next;

                thirdNode->next = NULL;

                while(l1)
                {
                    lastNode->next = l1;

                    lastNode = l1;

                    l1 = l1->next;

                    lastNode->next = NULL;
                }
            }
        }
    }

    return thirdNode;
}

int main()
{
    int arrayOne [] = {1, 2, 4};

    createNodesFirst(arrayOne, 3);

    printf("\nDisplaying First List: ");

    displayNodes(firstNode);

    printf("\n");

    int arrayTwo [] = {1, 3, 4};

    createNodesSecond(arrayTwo, 3);

    printf("\nDisplaying Second List: ");

    displayNodes(secondNode);

    printf("\n");

    struct Node *printNodes;

    printNodes = mergeTwoLists(firstNode, secondNode);

    printf("\nDisplaying Merged List: ");

    displayNodes(printNodes);

    printf("\n");

    return 0;
}
