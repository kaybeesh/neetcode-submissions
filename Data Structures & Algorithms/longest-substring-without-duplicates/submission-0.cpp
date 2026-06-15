class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // sw - tp
        int l = 0, r = 0;
        int ls = 0;

        unordered_set<char> cs;
        int len = s.size();

        while(l <=r && r < len){
            while(cs.contains(s[r])){
                // moving left p
                cs.erase(s[l]);
                l++;
            }

            // unique c - insert 
            cs.insert(s[r]);
            int cls = r - l + 1;
            ls = max(ls, cls);
            r++;
        }


         return ls;



        
    }
};
