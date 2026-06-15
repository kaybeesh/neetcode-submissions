class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;

        for(int i = 0; i<= n; i++){
            int c = 0;
            int n = i;
            while(n!=0){
                n= n&(n-1);
                c++;
            }
            res.push_back(c);
        }

        return res;
        
    }
};
