class Solution {
public:
    int getSum(int a, int b) {
        int res = 0;
        int carry = 0;
        for(int i = 0 ; i < 32 ; i ++){
            int mask = carry ^ ((a >> i) & 1) ^ ((b >> i) & 1 );
            mask = mask << i ;
            res |= mask; 
            carry = (carry + ((a >> i) & 1) + ((b >> i) & 1 )) >= 2 ? 1 : 0;

        }
        return res;
    }
};
