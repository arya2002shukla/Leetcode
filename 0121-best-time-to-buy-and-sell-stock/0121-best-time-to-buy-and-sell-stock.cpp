class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        int min_p = 10000000000000;
        int max_p = 0;
        for(int i=0;i<s;i++){
            min_p = min(min_p, prices[i]);
            max_p = max(max_p, prices[i]-min_p);
        }

        return max_p;
    }
};