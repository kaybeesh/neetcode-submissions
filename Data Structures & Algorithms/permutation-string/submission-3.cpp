class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> s1f(26,0);
        vector<int> s2f(26,0);

        for(int i=0; i<s1.size(); i++){
            s1f[s1[i] - 'a']++;
            s2f[s2[i] - 'a']++;
        }

        int m=0;
        for(int i=0;i<26;i++){
            if(s1f[i] == s2f[i]){
                m++;
            }
        }

        // sw
        int l = 0, r = s1.size();
        while(l<=r && r<s2.size()){
            if(m==26) return true;

            // move r pt
            int ci = s2[r] - 'a';
            s2f[ci]++;

            if(s1f[ci] == s2f[ci]){
                // good case
                m++;
            } else if(s1f[ci]  == s2f[ci]-1){
                m--;
            }



            // move l pt
            ci = s2[l] - 'a';
            s2f[ci]--;
            if(s1f[ci] == s2f[ci]){
                // good case
                m++;
            } else if(s1f[ci] == s2f[ci] + 1){
                m--;
            }
            r++;
            l++;
        }

        return m == 26;
        
    }
};
