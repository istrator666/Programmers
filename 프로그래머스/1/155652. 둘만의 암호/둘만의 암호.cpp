#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(int i = 0; i < s.size(); ++i)
    {
        char c = s[i];
        int count = 0;
        
        while(count < index)
        {
            c++;
            if (c > 'z')
            {
                c = 'a';
            }
        
            bool isSkip = false;
        
            for (int j = 0; j < skip.size(); ++j)
            {
                if(c== skip[j])
                {
                    isSkip = true;
                    break;
                }
            }
        
            if (!isSkip)
            {
                ++count;
            }
        }
        answer += c;
    }
    
    return answer;
}