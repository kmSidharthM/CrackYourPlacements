#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.size(), s2 = needle.size();
        int i=0, j=0;
        for(i=0;i<=s1-s2;i++){
            for(j=0;j<s2;j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == s2)
                return i;
        }
        return -1;
    }
};