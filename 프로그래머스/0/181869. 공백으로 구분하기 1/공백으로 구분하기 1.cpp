#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream mystream(my_string);
    string word;
    
    while (mystream >> word)
    {
        answer.push_back(word);
    }
    
    
    
    return answer;
}