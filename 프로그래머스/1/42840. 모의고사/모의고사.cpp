#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer, check(3, 0);
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for (int i = 0; i < answers.size(); ++i)
    {
        if (a[i % a.size()] == answers[i])
        {
            check[0]++;
        }
        if (b[i % b.size()] == answers[i])
        {
            check[1]++;
        }
        if (c[i % c.size()] == answers[i])
        {
            check[2]++;
        }
        
    }
    
        int max = *max_element(check.begin(), check.end());
        
        for (int i = 0; i <= 2; ++i)
        {
            if (max == check[i])
            {
                answer.push_back(i + 1);
            }
        }
    
    return answer;
}