#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    vector<int> numbers;
    int val = 0;

    for (char c : number)
    {
        int num = c - '0';
        numbers.push_back(num);
    }
    
    for (int num : numbers)
    {
        val += num;
    }
    return answer = val % 9;
}