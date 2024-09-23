#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int ncount = 0;

    while (ncount < n)
    {
        ++answer;

        if (answer % 3 == 0)
        {
            continue;
        }

        int Check_three = answer;
        bool hasThree = false;
        while(Check_three > 0)
        {
            if (Check_three % 10 == 3)
            {
                hasThree = true;
                break;
            }
            Check_three /= 10;
        }
        
        if (hasThree)
        {
            continue;
        }

        ++ncount;
    }

    return answer;
}