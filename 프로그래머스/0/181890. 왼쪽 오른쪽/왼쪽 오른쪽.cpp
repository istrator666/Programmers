#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    for (int i = 0; i < str_list.size(); i++)
    {
        if ("l" == str_list[i])
        {
            return answer = vector<string>(str_list.begin(), str_list.begin() + i);
        }
        else if ("r" == str_list[i])
        {
            return answer = vector<string>(str_list.begin() + i + 1, str_list.end());
        }

    }
    
    
    return answer;
}