#pragma once
#include "../lib/ListNode.h"

/**
* Definition of ListNode
* class ListNode {
* public:
*     int val;
*     ListNode *next;
*     ListNode(int val) {
*         this->val = val;
*         this->next = NULL;
*     }
* }
*/
class Solution {
public:
    /**
    * @param head: The first node of linked list.
    * @return: True if it has a cycle, or false
    */
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
        {
            return false;
        }

        ListNode* fast = head->next;
        ListNode* slow = head;

        while (fast != slow)
        {
            if (fast == nullptr || fast->next == nullptr)
            {
                return false;
            }

            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }
};
