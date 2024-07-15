#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int, int> frequency;
      int ans;
      for(auto i: nums) {
        ++frequency[i];
        if(frequency[i] > nums.size()/2)
            ans = i;
      }  
      return ans;
    }
};