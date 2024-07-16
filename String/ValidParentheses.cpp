#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
                brackets.push(s[i]);
            else if (
                (s[i] == '}' && !brackets.empty() && brackets.top() == '{' ) || 
                (s[i] == ']' && !brackets.empty() && brackets.top() == '[' ) || 
                (s[i] == ')' && !brackets.empty() && brackets.top() == '(' ) )
                brackets.pop();
            else
                return false;
        }
        return brackets.empty();
    }
};