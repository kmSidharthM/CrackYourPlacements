#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, min = prices[0];
        for(int i=1;i<prices.size();i++) {
            if(prices[i] < min)
                min = prices[i];
            else
                maxProfit = max(maxProfit, prices[i] - min);
        }
        return maxProfit;
    }
};