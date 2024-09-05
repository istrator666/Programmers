#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string mystring;
    
    for (int i = 0; i < my_string.size(); i++) 
    {
        if (my_string[i] != ' ') 
        {
            mystring.push_back(my_string[i]);
        } 

        else if (!mystring.empty()) 
        {
            answer.push_back(mystring);
            mystring.clear();
        }
    }

    if (!mystring.empty()) {
        answer.push_back(mystring);
    }
    
    return answer;
}