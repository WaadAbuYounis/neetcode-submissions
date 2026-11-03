class Solution {
public:
    int getSum(int a, int b) {
        int res = 0;
        int carry = 0;
        for(int i = 0 ; i < 32 ; i ++){
            int mask = carry ^ ((a >> i) & 1) ^ ((b >> i) & 1 );
            mask = mask << i ;
            res |= mask; 
            if((((a >> i) & 1 ) & ((b >> i) & 1)) || (((b >> i) & 1) & (carry & 1)) || (((a >> i) & 1) & (carry & 1))){ //carry still 1 if there is two ones in (carry , bit i in a , bit i in b) 
                carry = 1;
            }
            else carry = 0;

        }
        return res;
    }
};
