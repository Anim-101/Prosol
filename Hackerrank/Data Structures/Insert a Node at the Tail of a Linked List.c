// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode *lastNode = NULL;

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    SinglyLinkedListNode *tempNode, *pointNode;

    tempNode = malloc(sizeof(SinglyLinkedListNode));

    tempNode->data = data;

    tempNode->next = NULL;

    pointNode = head;

    if(head == NULL)
    {
        head = tempNode;

        lastNode = tempNode;
    }
    else
    {
        lastNode->next = tempNode;

        lastNode = tempNode;
    }

    return head;
}
