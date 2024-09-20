#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int ibin1 = stoi(bin1, nullptr, 2);
    int ibin2 = stoi(bin2, nullptr, 2);
    int sum = ibin1 + ibin2;
    
    if (sum == 0) 
    {
        return "0";
    }
    
    
    while (sum > 0) 
    {
        answer += (sum % 2 == 0) ? "0" : "1";
        sum /= 2;
    }

    reverse(answer.begin(), answer.end());
    
    return answer;
}