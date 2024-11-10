#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (int i = 0; i < commands.size(); ++i)
    {
        int start = commands[i][0] - 1;
        int end = commands[i][1] - 1;
        int index = commands[i][2] - 1;
        
        vector<int> temp(array.begin() + start, array.begin() + end + 1);
        
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[index]);
    }
    
    return answer;
}