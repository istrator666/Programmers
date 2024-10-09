#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> name_yearning;
    
    for (int i = 0; i < name.size(); ++i)
    {
        name_yearning[name[i]] = yearning[i];
    }
    
    for (int i = 0; i < photo.size(); ++i)
    {
        int sum = 0;
        
        for (int j = 0; j < photo[i].size(); ++j)
        {
            if (name_yearning.find(photo[i][j]) != name_yearning.end())
            {
                sum += name_yearning[photo[i][j]];
            }
        }
        
        answer.push_back(sum);
    }
    
    return answer;
}