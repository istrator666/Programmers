#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(const string& s : quiz)
    {
        istringstream is(s);
        string X, op, Y, eq, Z;
        
        is >> X >> op >> Y >> eq >> Z;
        
        int x = stoi(X);
        int y = stoi(Y);
        int z = stoi(Z);
        
        int result = 0;
        
        if (op == "+")
        {
            result = x + y;
        }
        else if (op == "-")
        {
            result = x - y;
        }
        
        if (result == z)
        {
            answer.push_back("O");
        }
        else
        {
            answer.push_back("X");
        }
        
    }
    
    
    return answer;
}