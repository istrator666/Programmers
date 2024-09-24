#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int safeX[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int safeY[8] = {0, 0, -1, 1, -1, 1, -1, 1};
    vector<vector<bool>> Check_area(board.size(), vector<bool>(board.size(), false));
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == 1)
            {
                Check_area[i][j] = true;
                
                for (int k =0; k < 8; k++)
                {
                    int xi = i + safeX[k];
                    int yj = j + safeY[k];
                    
                    if (xi >= 0 && xi < board.size() && yj >= 0 && yj < board.size())
                    {
                        Check_area[xi][yj] = true;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (!Check_area[i][j])
            {
                ++answer;
            }
        }
    }
    
    return answer;
}