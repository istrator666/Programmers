#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int pLength = p.length();
    long long pNum = stoll(p);
    
    for (int i = 0; i <= t.length() - pLength; ++i)
    {
        string sub = t.substr(i, pLength);
        long long subNum = stoll(sub);
        
        if (subNum <= pNum)
        {
            ++answer;
        }
    }
    
    
    return answer;
}