// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    struct SinglyLinkedListNode *lastNode, *pointNode;

    pointNode = head;

    lastNode = pointNode->next;

    while(lastNode != NULL)
    {
        if(pointNode->data != lastNode->data)
        {
            pointNode = lastNode;

            lastNode = lastNode->next;
        }
        else
        {
            pointNode->next = lastNode->next;

            free(lastNode);

            lastNode = pointNode->next;
        }
    }

    return head;
}
