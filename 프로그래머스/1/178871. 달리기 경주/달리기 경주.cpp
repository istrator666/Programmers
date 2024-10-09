#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> map_players;
    
    for (int i = 0; i < players.size(); ++i)
    {
        map_players[players[i]] = i;
    }
    
    for (auto &calling : callings)
    {
        int cur_idx = map_players[calling];
        
        if (cur_idx > 0)
        {
            string front_player = players[cur_idx - 1];
            
            swap(players[cur_idx], players[cur_idx - 1]);
            
            map_players[calling] = cur_idx -1;
            map_players[front_player] = cur_idx;
        }
    }
    
    return players;
}