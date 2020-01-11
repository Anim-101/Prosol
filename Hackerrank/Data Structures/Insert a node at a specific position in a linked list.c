// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode *tempNode, *pointNode;

    if(position == 0)
    {
        tempNode = (SinglyLinkedListNode *) malloc(sizeof(SinglyLinkedListNode));

        tempNode->data = data;

        tempNode->next = head;

        head = tempNode;
    }
    else
    {
        pointNode = head;

        for(int i = 0; i < position - 1 && pointNode; i++)
        {
            pointNode = pointNode->next;
        }

        if(pointNode)
        {
            tempNode = (SinglyLinkedListNode *) malloc(sizeof(SinglyLinkedListNode));

            tempNode->data = data;

            tempNode->next = pointNode->next;

            pointNode->next = tempNode;
        }
    }

    return head;
}
