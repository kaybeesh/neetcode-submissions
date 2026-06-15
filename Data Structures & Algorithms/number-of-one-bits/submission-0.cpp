class Solution {
public:
    int hammingWeight(uint32_t n) {

        int cnt = 0;
        // using left shift on the value 1
        // at a time set i th bit to 1 and then do and operation
        for(int i=0; i <32; i++){
            int mask = 1 << i;
            if(mask & n) cnt++;
        }

        return cnt;

    }
};
