class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        // easy binary string and reverse each bit - no brain

        string bnum = "";
        for(int i=0; i<32; i++){

            if((n >> i) & 1) bnum+='1';
            else bnum+='0';
        }


        uint32_t res = 0;
        for(int i=0; i< 32; i++){
            if(bnum[31-i] == '1'){
                res = res | (1<<i);
            }

        }

        return res;
        
    }
};
