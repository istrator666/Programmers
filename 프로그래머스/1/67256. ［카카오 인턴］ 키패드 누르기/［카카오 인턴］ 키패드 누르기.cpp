#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10;
    int right = 12;
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (1 == numbers[i] || 4 == numbers[i] || 7 == numbers[i])
        {
            answer += "L";
            left = numbers[i];
        }
        else if (3 == numbers[i] || 6 == numbers[i] || 9 == numbers[i])
        {
            answer += "R";
            right = numbers[i];
        }
        else
        {
            if (0 == numbers[i])
            {
                numbers[i] = 11;
            }
            
            int distance_left = abs(left - numbers[i]) / 3 + abs(left - numbers[i]) % 3;
            int distacne_right = abs(right - numbers[i]) / 3 + abs(right - numbers[i]) % 3;
            
            if (distance_left > distacne_right)
            {
                answer += "R";
                right = numbers[i];
            }
            else if (distance_left < distacne_right)
            {
                answer += "L";
                left = numbers[i];
            }
            else
            {
                if ("left" == hand)
                {
                    answer += "L";
                    left = numbers[i];
                }
                else if ("right" == hand)
                {
                    answer += "R";
                    right = numbers[i];
                }
            }
        }
    }
    
    
    
    return answer;
}