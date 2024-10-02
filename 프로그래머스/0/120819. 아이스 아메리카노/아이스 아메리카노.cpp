#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer(2, 0);
    int curMoney = money;
    
    while(curMoney >= 5500)
    {
        curMoney -= 5500;
        answer[0] += 1;
    }
    
    answer[1] = curMoney;
    
    return answer;
}