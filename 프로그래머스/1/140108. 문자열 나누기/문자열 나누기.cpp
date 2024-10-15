#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int x_count =0;
    int other_count = 0;
    char x = s[0];
    
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == x)
        {
            x_count++;
        }
        else
        {
            other_count++;
        }
        
        if (x_count == other_count)
        {
            answer++;
            
            if (i + 1 < s.size())
            {
                x = s[i + 1];
            }
            
            x_count = 0;
            other_count = 0;
        }
    }
    
    if (x_count != other_count)
    {
        answer++;
    }
    
    
    return answer;
}