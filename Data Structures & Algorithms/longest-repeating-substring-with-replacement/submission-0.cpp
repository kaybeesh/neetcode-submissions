class Solution {
public:
    int characterReplacement(string s, int k) {

        // how long a window with once c at a time
        unordered_set<char> uc(s.begin(), s.end());
        int len = s.size();
        int ans = 0;

        for(char c : uc){
            // tc * n - number of unique characters

            int l = 0, r = 0;
            int rc = 0;            

            while(l <= r && r < len){
                if(s[r] == c){
                    // good case
                    rc++;
                }

                // current repeating c length
                int crc = r - l + 1;
                while(crc - rc > k){ 
                    // if the crc - rc <= k this means no more replacement available
                    // hence no point of moving left p
                    // since we have some k remaining, we want to check if 
                    // moving left p is worth it or not
                    if(s[l] == c){
                        rc--;
                    }
                    l++;
                    crc = r - l + 1;
                }

                crc = r - l + 1;
                // updating max longest repeating window
                ans = max(ans, crc);
                r++;

            }
        }

        return ans;
        
    }
};
