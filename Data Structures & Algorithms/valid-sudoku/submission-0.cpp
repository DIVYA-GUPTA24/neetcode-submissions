class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row[9];
        unordered_set<char>col[9];
        unordered_set<char>boxes[9];

        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }

                int index=(i/3)*3+(j/3);
                char digit=board[i][j];

                if(row[i].find(digit)!=row[i].end())
                {
                    return false;
                }
                if(col[j].find(digit)!=col[j].end())
                {
                    return false;
                }
                if(boxes[index].find(digit)!=boxes[index].end())
                return false;

                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                boxes[index].insert(board[i][j]);
            }
        }
        return true;
    }
};
