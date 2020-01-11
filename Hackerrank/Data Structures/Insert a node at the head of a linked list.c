// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) 
{
    SinglyLinkedListNode *tempNode;

    tempNode = (SinglyLinkedListNode *) malloc(sizeof(SinglyLinkedListNode));

    tempNode->data = data;

    tempNode->next = head;

    head = tempNode;

    return head;
}
