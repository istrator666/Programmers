#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    map<int, int> check_numbers;
    check_numbers[0] = 0;
    check_numbers[1] = 0;
    check_numbers[2] = 0;
    check_numbers[3] = 0;
    check_numbers[4] = 0;
    check_numbers[5] = 0;
    check_numbers[6] = 0;
    check_numbers[7] = 0;
    check_numbers[8] = 0;
    check_numbers[9] = 0;
    
    for (auto number : numbers)
    {
        check_numbers[number] += 1;
    }
    
    for(int i = 0; i <= 9; ++i)
    {
        if (check_numbers[i] == 0)
        {
            answer += i;
        }
    }
    
    
    
    return answer;
}