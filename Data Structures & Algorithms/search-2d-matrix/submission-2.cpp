class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size() ;
        int row ;
        int leftR = 0 , rightR = m - 1 ;
        while(leftR <= rightR){
            int midR = (leftR + rightR) / 2;
            if(matrix[midR][0] > target){
                rightR = midR - 1;
            }
            else if(matrix[midR][0] < target){
                if(matrix[midR][n-1] < target){
                    leftR = midR + 1;
                }
                else{
                    row = midR;
                    break;
                }
            }
            else return true;
        }
        int l = 0 , r = n - 1 ;
        while(l <= r){
            int mid = (l+r) / 2;
            if(matrix[row][mid] < target){
                l = mid + 1;
            }
            else if(matrix[row][mid] > target){
                r = mid - 1;
            }
            else return true;
        }

        return false;
    }
};
