#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int count = 0;
    
    while (n > count)
    {
        ++count;
        
        if (count % 2 == 0)
        {
            continue;
        }
        else
        {
            answer.push_back(count);
        }
    }
    
    
    
    return answer;
}