class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxP = *max_element(piles.begin(),piles.end());
        if( h == piles.size()){
            return maxP;
        }
        int left = 1, right = maxP;
        while(left < right){
            int mid = (left+right) / 2;
            int hoursSpent = 0;
            for(auto pile : piles){
                hoursSpent += ceil(double(pile)/mid);
            }
            if(hoursSpent > h) left = mid + 1;
            else right = mid ;
        }
        return left;
        
    }
};
