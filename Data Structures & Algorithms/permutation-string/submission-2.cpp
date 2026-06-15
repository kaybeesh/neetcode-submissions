class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char, int> s1m;
        for(char c: s1){
            s1m[c]++;
        }

        int s1len = s1.size();
        int s2len = s2.size(); 

        int n = s1m.size();

        int l = 0, r = s1len - 1;
        while(l<=r && r<s2len){

            unordered_map<char, int> s2m;
            int t = 0;
            // check for perm
            for(int i = l ; i <=r ; i++ ){
                char c2 = s2[i];
                s2m[c2]++;

                if(s1m[c2] == s2m[c2]){
                    // nice
                    t++;
                }

                if(s1m[c2] < s2m[c2]){
                    break;
                }
            }

            if(t == n) return true;
            r++;
            l++;

        }

        return false;
        
    }
};
