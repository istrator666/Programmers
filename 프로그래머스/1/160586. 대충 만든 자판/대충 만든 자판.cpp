#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> key_numbercount(26, 101);
    
    for (int i = 0; i < keymap.size(); ++i)
    {
        for (int j = 0; j < keymap[i].size(); ++j)
        {
            char c = keymap[i][j];
            int idx = c - 'A';
            
            int press = j + 1;
            
            if (press < key_numbercount[idx])
            {
                key_numbercount[idx] = press;
            }
            
        }
    }
    
    for (int i = 0; i < targets.size(); ++i)
    {
        int total = 0;
        
        for (int j = 0; j < targets[i].size(); ++j)
        {
            char c = targets[i][j];
            int idx = c - 'A';

            
            if (key_numbercount[idx] == 101)
            {
                total = -1;
                break;
            }
            
            total += key_numbercount[idx];
        }
        
        answer.push_back(total);
    }
    
    
    
    return answer;
}