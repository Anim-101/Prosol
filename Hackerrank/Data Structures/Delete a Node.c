// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

 int Count(SinglyLinkedListNode *pointNode)
 {
     int count = 0;

     while(pointNode != NULL)
     {
         count++;

         pointNode = pointNode->next;
     }

     return count;
 }

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    SinglyLinkedListNode *tempNode = NULL, *pointNode = head;

    if((position < 0) || (position > Count(head)))
    {
        return head;
    }
    else
    {
        if(head == NULL)
        {
            return head;
        }
        else
        {
            if(position == 0)
            {
                head = pointNode->next;

                free(pointNode);

                return head;

            }
            else
            {
                for(int i = 0; i <= position - 1; i++)
                {
                    tempNode = pointNode;

                    pointNode = pointNode->next;
                }

                tempNode->next = pointNode->next;

                free(pointNode);

                return head;
            } 
        }
    }
}
