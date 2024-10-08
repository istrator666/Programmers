#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int n = board.size();
    
    vector<int> dh = {0, 1, -1, 0};
    vector<int> hw = {1, 0, 0, -1};
    
    for (int i = 0; i < 4; ++i)
    {
        int h_check = h + dh[i];
        int w_check = w + hw[i];
        
        if (0 <= h_check && n > h_check && 0 <= w_check && n > w_check)
        {
            if (board[h][w] == board[h_check][w_check])
            {
                ++answer;
            }
        }
    }
    
    
    return answer;
}