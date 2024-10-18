#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> check_completion;
    
    for (int i = 0; i < participant.size(); ++i)
    {
        check_completion[participant[i]]++;
    }
    
    for (int i = 0; i < completion.size(); ++i)
    {
        check_completion[completion[i]]--;
    }
    
    for (const auto& entry : check_completion)
    {
        if (0 < entry.second)
        {
            return entry.first;
        }
    }
    
    
    return answer;
}