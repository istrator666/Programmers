#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    
    for(const vector<int>& query : queries)
    {
        int i = query[0];
        int j = query[1];
        
        reverse(answer.begin() + i, answer.begin() + j + 1);
    }
    
    
    return answer;
}