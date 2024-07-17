#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev, *temp = head;
        int val=INT_MAX;
        while(head != NULL) {
            if(val != head->val) {
                val = head->val;
                prev = head;
            } else {
                prev->next = head->next;
            }
            head = head->next;
        }
        return temp;
    }
};