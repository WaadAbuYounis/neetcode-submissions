class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        vector<unordered_set<int>> boxes(9);
        
        for(int i = 0 ; i < 9 ; i++){ 
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] == '.') continue;
                int num = int(board[i][j]);
                if(rows[i].find(num) != rows[i].end() || cols[j].find(num) != cols[j].end()){
                    return false;
                }
                int index = (i / 3) * 3 + j / 3;
                if(boxes[index].find(num) != boxes[index].end()) return false;
                rows[i].insert(num);
                cols[j].insert(num);
                boxes[index].insert(num);
            }
        }
        return true;
    }
};
