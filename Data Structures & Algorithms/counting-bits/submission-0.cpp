class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1) ;
        int offset = 1;
        res[0] = 0;
        for(int i = 1 ; i < n+1 ; i++){
            if(offset * 2 == i){
                offset = i ;
            }
            res[i] = 1 + res[i-offset];
        }
        return res;
    }
};
