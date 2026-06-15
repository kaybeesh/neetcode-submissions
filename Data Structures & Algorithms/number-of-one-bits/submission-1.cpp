class Solution {
public:
    int hammingWeight(uint32_t n) {

        int cnt = 0;
        // method 1 = using left shift on the value 1
        // at a time set i th bit to 1 and then do and operation
        // for(int i=0; i <32; i++){
        //     int mask = 1 << i;
        //     if(mask & n) cnt++;
        // }

        // return cnt;

        // method 2 = using right shift on the number itself 
        // to check the last right most bit at a time 
        // simply and with 1 OR alternatively modulo with 2 also works
        // this will end when the number itself becomes 0

        while(n != 0){
            if(n & 1) cnt++;
            n = n >> 1;
        }
        return cnt;






    }
};
