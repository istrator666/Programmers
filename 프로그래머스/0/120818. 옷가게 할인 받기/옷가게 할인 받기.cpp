#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = price;
    
    if (500000 <= price)
    {
        answer = price * 80 / 100;
    }
    else if (300000 <= price)
    {
        answer = price * 90 / 100;
    }
    else if (100000 <= price)
    {
        answer = price * 95 / 100;
    }
    
    return answer;
}