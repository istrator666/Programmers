#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> v;
    
    while (n)
    {
        v.push_back(n % 3);
        n /= 3;
    }
    
    int reverse = 1;
    
    for (int i = 0; i < v.size(); ++i)
    {
        answer += v[v.size() - i - 1] * (reverse);
        reverse *= 3;
        
    }
    
    
    return answer;
}