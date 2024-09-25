#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    for (int i = 0; i < keyinput.size(); ++i)
    {
        int boardX = board[0] / 2;
        int boardY = board[1] / 2;
        
        int playerX = answer[0];
        int playerY = answer[1];
        
        if ("left" == keyinput[i])
        {
            playerX -= 1;
        }
        else if ("right" == keyinput[i])
        {
            playerX += 1;
        }
        else if ("up" == keyinput[i])
        {
            playerY += 1;
        }
        else if ("down" == keyinput[i])
        {
            playerY -= 1;
        }
        
        if (playerX <= boardX && playerX >= -boardX && playerY <= boardY && playerY >= -boardY)
        {
            answer[0] = playerX;
            answer[1] = playerY;
        }
        
        
    }
    
    return answer;
}