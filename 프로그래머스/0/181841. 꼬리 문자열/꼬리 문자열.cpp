#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    int sfind = 0;
    
    for (int i = 0; i < str_list.size(); i++)
    {
        sfind = str_list[i].find(ex);
        
        if (sfind != string::npos)
        {
            continue;
        }
        else
        {
            answer += str_list[i];
        }
    }
    
    
    return answer;
}