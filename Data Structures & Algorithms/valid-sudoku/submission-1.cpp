class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows first
        for(int i=0;i<9;i++){
            unordered_set<int>st;
            for(int j = 0;j<9;j++){
                if(board[i][j] == '.') continue;
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        // check columns
        for(int i=0;i<9;i++){
            unordered_set<int>st;
            for(int j = 0;j<9;j++){
                if(board[j][i] == '.') continue;
                if(st.count(board[j][i])) return false;
                st.insert(board[j][i]);
            }
        }
        // check 3 by 3 
        for(int i=0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                unordered_set<int>st;
                for(int r = 0;r<3;r++){
                    for(int c=0;c<3;c++){
                        if(board[i+r][j+c] == '.') continue;
                        if(st.count(board[i+r][j+c])) return false;
                        st.insert(board[i+r][j+c]);
                    }
                }
            }
        }
        return true;
    }
};
