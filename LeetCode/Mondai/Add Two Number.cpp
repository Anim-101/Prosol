/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* listOne, ListNode* listTwo) {
        ListNode* head = new ListNode;
        ListNode *tail = head;
        int carryValue = 0;

        while (listOne != nullptr || listTwo != nullptr || carryValue != 0) {
            int listOneVal = (listOne != nullptr) ? listOne->val : 0;
            int listTwoVal = (listTwo !=nullptr) ? listTwo->val :0;

            int sum = listOneVal + listTwoVal + carryValue;
            int digit = sum % 10;
            carryValue = sum / 10;

            ListNode* newNode = new ListNode(digit);

            tail->next = newNode;
            tail = tail->next;

            listOne = (listOne != nullptr) ? listOne->next : nullptr;
            listTwo = (listTwo != nullptr) ? listTwo->next : nullptr;
        }

        ListNode* result = head->next;
        
        delete head;

        return result;
    }
};