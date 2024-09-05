#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> vecString;
    string myString;
    
    for(int i = 0; i < binomial.size(); i++)
    {
        if ('+' == binomial[i] || '-' == binomial[i] || '*' == binomial[i])
        {
            myString.push_back(binomial[i]);
            vecString.push_back(myString);
            myString.clear();
        }
        else if (' ' != binomial[i])
        {
            myString.push_back(binomial[i]);
        }
        else
        {
            if (!myString.empty()) 
            {
                vecString.push_back(myString);
                myString.clear();
            }
        }
    }
    
    if (!myString.empty())
    {
        vecString.push_back(myString);
    }

    int operand1 = stoi(vecString[0]);
    string oper = vecString[1];
    int operand2 = stoi(vecString[2]);

    if (oper == "+") {
        answer = operand1 + operand2;
    }
    else if (oper == "-") {
        answer = operand1 - operand2;
    }
    else if (oper == "*") {
        answer = operand1 * operand2;
    }

    return answer;
}