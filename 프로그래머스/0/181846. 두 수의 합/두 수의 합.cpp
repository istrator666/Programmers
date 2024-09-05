#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int ten = 0;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if (a.size() < b.size())
    {
        a.resize(b.size(), '0');
    }
    else
    {
        b.resize(a.size(), '0');
    }

    for (int i = 0; i < a.size(); ++i)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + ten;
        ten = sum /10;
        sum = sum % 10;

        answer += sum + '0';
    }

    if (ten != 0)
    {
        answer += to_string(ten);
    }

    reverse(answer.begin(), answer.end());

    return answer;
}