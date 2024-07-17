#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool palindrome(string s, int i, int j) {
        while(i < j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i < j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            } else {
                return palindrome(s, i, j-1) || palindrome(s, i+1, j);
            }
        }
        return true;
    }
};