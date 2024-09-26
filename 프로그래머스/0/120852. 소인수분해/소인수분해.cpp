#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = 3;
    
    while (n % 2 == 0)
    {
        if (find(answer.begin(), answer.end(), 2) == answer.end())
        {
            answer.push_back(2);
        }
        
        n /= 2;
    }
    
    while (i * i <= n)
    {
        while(n % i == 0)
        {
            if (find(answer.begin(), answer.end(), i) == answer.end())
            {
                answer.push_back(i);
            }
            
            n /= i;
        }
        
        i += 2;
    }
    
    if (n > 2)
    {
        answer.push_back(n);
    }
    
    
    return answer;
}