#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
        for (int i = 0; i < my_strings.size(); i++) 
        {
            int s = parts[i][0];
            int e = parts[i][1];
        
            string part = my_strings[i].substr(s, e - s + 1);
            answer += part;
        }
            
    return answer;
}