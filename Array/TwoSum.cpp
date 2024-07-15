#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numbers;
        int diff;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            diff = target - nums[i];
            if(numbers[diff] != 0) {
                ans.push_back(i);
                ans.push_back(numbers[diff]-1);
            }
            numbers[nums[i]] = i+1;
        }
        return ans;
    }
};