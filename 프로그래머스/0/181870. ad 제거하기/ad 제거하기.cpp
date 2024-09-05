#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int i = 0; i < strArr.size(); i++)
    {
       if (string::npos == strArr[i].find("ad"))
       {
           answer.push_back(strArr[i]);
       }
    }
    
    return answer;
}