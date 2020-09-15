// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
 
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    struct DoublyLinkedListNode *pointNode, *tempNode;

    pointNode = head;

    while(pointNode != NULL)
    {
        tempNode = pointNode->next;

        pointNode->next = pointNode->prev;

        pointNode->prev = tempNode;

        pointNode = pointNode->prev;

        if(pointNode != NULL && pointNode->next == NULL)
        {
            head = pointNode;
        }
    }

    return head;
}
