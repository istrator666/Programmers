#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> pick;
    
    for (int i = 0; i < moves.size(); ++i)
    {
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[j][moves[i] - 1] != 0)
            {
                int cur = board[j][moves[i] - 1];
                board[j][moves[i] - 1] = 0;
                
                if (!pick.empty() && pick.top() == cur)
                {
                    answer += 2;
                    pick.pop();
                }
                else
                {
                    pick.push(cur);
                }

                break;
            }
        }
    }
    
    
    return answer;
}