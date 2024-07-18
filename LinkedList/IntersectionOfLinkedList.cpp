#include<bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      int l1=0,l2=0;
      ListNode *temp1=headA, *temp2=headB;
      while(temp1 != NULL) {
          l1++;
          temp1=temp1->next;
      }
      while(temp2 != NULL) {
          l2++;
          temp2=temp2->next;
      }
      int dif = l1-l2;
      if(dif >= 0) {
          temp1=headA;
          while(dif > 0) {
              temp1 = temp1->next;
              dif--;
          }
          temp2 = headB;
      } else {
          temp2=headB;
          while(dif < 0) {
              temp2 = temp2->next;
              dif++;
          }
          temp1 = headA;
      }
      while(temp1 != temp2) {
          temp1=temp1->next;
          temp2=temp2->next;
      }
      return temp1;
    }
};