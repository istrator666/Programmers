#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string str_num = to_string(num);
    string str_k = to_string(k);
    
    for (int i = 0; i < str_num.size(); i++)
    {
        if (str_num[i] == str_k[0])
        {
            return answer = i+1;
        }
    }
    
    
    return answer = -1;
}