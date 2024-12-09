#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    string convert = to_string(n);
    int answer = 0;
    
    for (int i = 0; i < convert.size(); ++i)
    {
        char c = convert[i];
        answer += c - '0';
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}