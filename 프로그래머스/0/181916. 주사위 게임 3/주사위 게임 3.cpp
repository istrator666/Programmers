#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int diceVal[7] = {0};
    ++diceVal[a];
    ++diceVal[b];
    ++diceVal[c];
    ++diceVal[d];
    
    int p = 0;
    int q = 0;
    int r = 0;
    int singleCount = 0;
   
    for (int i = 0; i <= 6; ++i)
    {
        if (diceVal[i] == 4)
        {
            return answer = 1111 * i;
        }
        else if (diceVal[i] == 3)
        {
            p = i;
            for (int j = 0; j <= 6; ++j)
            {
                if (diceVal[j] == 1)
                {
                    q = j;
                    break;
                }
            }
            return answer = (10 * p + q) * (10 * p + q); 
        }
        else if (diceVal[i] == 2)
        {
            if (p == 0)
            {
                p = i;
            }
            else
            {
                q = i;
            }
        }
        else if (diceVal[i] == 1)
        {
            singleCount++;
            if (singleCount == 1)
            {
                q = i;
            }
            else
            {
                r = i;
            }
        }
    }
    
    if (p != 0 && q != 0 && singleCount == 0) {
        return answer = (p + q) * abs(p - q);
    }
    else if (singleCount == 4) {
        return answer = min({a, b, c, d});
    }

    return answer = q * r;
}