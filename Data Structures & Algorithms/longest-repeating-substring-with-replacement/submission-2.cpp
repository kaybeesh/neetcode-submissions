class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> fm;
        int ans = 0;

        int l =0, r=0;
        int len = s.size();
        int mf = 0;


        while(l<=r && r<len){
            // increase count of freq of the c
            fm[s[r]]++;
            mf = max(mf, fm[s[r]]);

            int crl = r - l + 1;
            while(crl - mf > k){
                //shrink the window
                fm[s[l]]--;
                l++;
                crl = r - l + 1;
            }

            // crl = r - l + 1;
            ans = max(ans, crl);
            r++;

        }

        return ans;
        
    }
};
