class Solution {
public:
    string minWindow(string s, string t) {

        // map freq of t
        unordered_map<char, int> tf;
        for(char c: t){
            tf[c]++;
        }

        unordered_map<char ,int > sf;
        int lent = t.size();
        int lens = s.size();

        int l = 0, r = 0;
        int cfm = 0 , nfm = tf.size();

        int res_len = INT_MAX;
        pair<int, int> ri = {-1,-1};

        while(l<=r && r<lens){
            char c = s[r];
            sf[c]++;

            if(tf.contains(c) && tf[c] == sf[c]){
                // this char is matched
                cfm++;
            }

            while(cfm == nfm){
                // store the result, we got one of the substrings
                int cl = r-l+1;
                if(cl < res_len){
                    res_len = cl;
                    ri = {l,r};    
                }

                // shringking window from left
                sf[s[l]]--;
                
                // check for impact on matches
                if(tf.contains(s[l]) && tf[s[l]] > sf[s[l]]){
                    // this char is matched, decrement matches
                    cfm--;
                    // breaks it put of loop

                }

                l++;
            }    

            r++;
        }

        return res_len == INT_MAX ? "":s.substr(ri.first, res_len);
        
    }
};
