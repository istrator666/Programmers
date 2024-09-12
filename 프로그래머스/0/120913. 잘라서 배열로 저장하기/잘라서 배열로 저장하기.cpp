#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int sizecount = 0;
    
    while(true)
    {
        if (my_str.size() - sizecount > n)
        {
            answer.push_back(my_str.substr(sizecount, n));
            sizecount += n;
        }
        else if (my_str.size() - sizecount <= n)
        {
            answer.push_back(my_str.substr(sizecount, my_str.size() - sizecount));
            return answer;
        }
    }
    
    return answer;
}