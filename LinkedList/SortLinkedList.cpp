#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
  public:
    Node* segregate(Node *head) {
      int zero = 0, one = 0, two = 0;
      Node *temp = head;
      while(temp != NULL) {
        if(temp->data == 1)
          one++;
        else if(temp->data == 2)
          two++;
        else
          zero++;
        temp = temp->next;
      }
      temp = head;
      while(zero > 0) {
        temp->data = 0;
        temp = temp->next;
        zero--;
      }
      while(one > 0) {
        temp->data = 1;
        temp = temp->next;
        one--;
      }
      while(two > 0) {
        temp->data = 2;
        temp = temp->next;
        two--;
      }
      return head;
    }
};

