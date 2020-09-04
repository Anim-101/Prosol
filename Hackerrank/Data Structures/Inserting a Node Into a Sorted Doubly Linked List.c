// Complete the sortedInsert function below.

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
 
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    struct DoublyLinkedListNode *tempNode, *lastNode = NULL, *pointNode;

    pointNode = head;

    tempNode = (struct DoublyLinkedListNode *) malloc(sizeof(struct DoublyLinkedListNode));

    tempNode->data = data;

    tempNode->next = NULL;

    tempNode->prev = NULL;

    if(pointNode == NULL) 
    {
        pointNode = tempNode;
    }
    else
    {
        while(pointNode && pointNode->data < data)
        {
            lastNode = pointNode;

            pointNode = pointNode->next;
        }

        if(pointNode == head)
        {
            tempNode->next = pointNode;

            pointNode->prev = tempNode;

            head = tempNode;
        }
        else
        {
            tempNode->next = lastNode->next;

            tempNode->prev = lastNode;

            lastNode->next = tempNode;
        }
    }

    return head;
}
