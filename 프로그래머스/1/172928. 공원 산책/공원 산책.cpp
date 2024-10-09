#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer(2, 0);
    int h = park.size();
    int w = park[0].size();
    
    bool found = false;
    
    for (int i = 0; i < h && !found; ++i)
    {
        for (int j = 0; j < w && !found; ++j)
        {
            if (park[i][j] == 'S')
            {
                answer[0] = i;
                answer[1] = j;
                found = true;
            }
        }
    }
    
    for (int i = 0; i < routes.size(); ++i)
    {
        string route = routes[i];
        string dir = "";
        int dis = 0;
        
        stringstream ss(route);
        
        ss >> dir >> dis;
        
        int dr = 0, dc = 0;
        
        if (dir == "N")
        {
            dr = -1;
            dc = 0;
        }
        else if (dir == "S")
        {
            dr = 1;
            dc = 0;
        }
        else if (dir == "W")
        {
            dr = 0;
            dc = -1;
        }
        else if (dir == "E")
        {
            dr = 0;
            dc = 1;
        }
        
        bool can_move = true;
        int new_r = answer[0];
        int new_c = answer[1];
        
        for (int k = 1; k <= dis; ++k)
        {
            int temp_r = answer[0] + dr * k;
            int temp_c = answer[1] + dc * k;
            
            if (temp_r <0 || temp_r >= h || temp_c < 0 || temp_c >= w)
            {
                can_move = false;
                break;
            }
            
            if (park[temp_r][temp_c] == 'X')
            {
                can_move = false;
                break;
            }
        }
        
        if (can_move)
        {
            answer[0] += dr * dis;
            answer[1] += dc * dis;
        }
    }
    
    return answer;
}