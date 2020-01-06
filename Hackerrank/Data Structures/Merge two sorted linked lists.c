// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    struct SinglyLinkedListNode *tempNode, *lastNode;

    if(head1 == NULL && head2 == NULL)
    {
        return NULL;
    }
    else if(head1 == NULL & head2 != NULL)
    {
        return head2;
    }
    else if(head1 != NULL && head2 == NULL)
    {
        return head1;
    }

    if(head1->data < head2->data)
    {
        tempNode = lastNode = head1;

        head1 = head1->next;

        tempNode->next = NULL;
    }
    else
    {
        tempNode = lastNode = head2;

        head2 = head2->next;

        tempNode->next = NULL;
    }

    while(head1 && head2)
    {
        if(head1->data < head2->data)
        {
            lastNode->next = head1;

            lastNode = head1;

            head1 = head1->next;

            lastNode->next = NULL;
        }
        else
        {
            lastNode->next = head2;

            lastNode = head2;

            head2 = head2->next;

            lastNode->next = NULL;
        }
    }

    if(head1)
    {
        lastNode->next = head1;
    }

    if(head2)
    {
        lastNode->next = head2;
    }

    return tempNode;
}
