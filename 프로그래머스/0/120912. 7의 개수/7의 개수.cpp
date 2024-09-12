#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for (int i : array)
    {
        string to_strnum = to_string(i);
        
        for(char j : to_strnum)
        {
            if ('7' == j)
            {
                ++answer;
            }
        }
    }
    
    return answer;
}