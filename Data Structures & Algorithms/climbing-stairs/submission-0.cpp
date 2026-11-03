class Solution {
public:
    int climbStairs(int n) {
        vector<int> db(n) ;
        if(n == 1) return 1;
        if(n == 2) return 2;

        db[0] = 1 ;
        db[1] = 2;

        for(int i = 3 ; i <= n ; i++){
            db[i-1] = db[i-2] + db[i-3];
        }
        return db[n-1];
    }
};
