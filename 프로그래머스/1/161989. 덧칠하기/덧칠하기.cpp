#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int last_paint = 0;
    
    for (auto s : section)
    {
        if (s > last_paint)
        {
            ++answer;
            
            if (s + m - 1 > n)
            {
                last_paint = n;
            }
            else
            {
                last_paint = s + m - 1;
            }
        }
    }
    
    return answer;
}