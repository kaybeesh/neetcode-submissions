class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;


        // tc -> n log n
        // log n because n = 2^k -1
        // --> k = log n + 1
        // if we limit k to 32 ya 64 bit then it becomes constant time
        // interesting

        // for(int i = 0; i<= n; i++){
        //     int c = 0;
        //     int n = i;
        //     while(n!=0){
        //         n= n&(n-1);
        //         c++;
        //     }
        //     res.push_back(c);
        // }

        // return res;


        // dp crazy
        // method 1 = the idea is any number can be represented by
        // n = 2^k + remainder in binary makes common sense
        // that means simply number of bits = 1 + number if bits in remainder


        vector<int> dp(n+1);
        dp[0]=0;
        int off = 1;

        for(int i=1; i<=n; i++){
            if(off * 2 == i) off = i;
            int rem = i - off;
            dp[i] = 1 + dp[rem];
        }
        return dp;
        
    }
};
