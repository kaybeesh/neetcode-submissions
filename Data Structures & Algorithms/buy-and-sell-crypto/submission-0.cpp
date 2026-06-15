class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // sw - tp
        int b = 0;
        int s = 1;

        int mp = 0;
        int cp = 0;

        int len = prices.size();

        while(b < s && s < len){
            if(prices[s] > prices[b]) {
                // good case
                cp = prices[s] - prices[b];
                if(cp > mp){
                    mp = cp;
                }
                s++;
            } else {
                // loss case
                b = s;
                s++;
            }
        }

        return mp;
        
    }
};
