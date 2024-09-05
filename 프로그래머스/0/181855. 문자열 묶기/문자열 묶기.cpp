#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    unordered_map<int, int> SizeCount;
    
    for (string_view str : strArr)
    {
        SizeCount[str.length()]++;
    }
    
    for (auto pair : SizeCount)
    {
        if (pair.second > answer)
        {
            answer = pair.second;
        }
    }
    
    
    return answer;
}