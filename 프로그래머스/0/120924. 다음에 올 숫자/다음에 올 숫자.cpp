#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int diff = common[1] - common[0];
    int ratio = common[1] / common[0];
    
    if (common[2] - common[1] == diff)
    {
        return answer = common[common.size() - 1]  + diff;
    }
    else
    {
        return answer = common[common.size() - 1] * ratio;
    }
    
    
    return answer;
}