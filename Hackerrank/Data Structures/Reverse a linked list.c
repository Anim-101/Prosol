// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode *tempNode = NULL, *lastNode = NULL;

    while(head != NULL)
    {
        lastNode = tempNode;

        tempNode = head;

        head = head->next;

        tempNode->next = lastNode;
    }

    return tempNode;
}
