// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
bool has_cycle(SinglyLinkedListNode* head) 
{
    struct SinglyLinkedListNode *pointNode, *tempNode;

    pointNode = tempNode = head;

    do 
    {
        pointNode = pointNode->next;

        tempNode = tempNode->next;

        tempNode = tempNode ? tempNode->next : tempNode;
    }
    while(pointNode && tempNode && pointNode != tempNode);

    if(pointNode == tempNode)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
