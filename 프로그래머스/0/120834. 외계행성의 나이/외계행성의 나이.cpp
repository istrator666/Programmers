#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(int age) {
    string answer = "";
    string str_age = to_string(age);
    unordered_map<char, char> map_age = 
    {
        {'0', 'a'}, {'1', 'b'}, {'2', 'c'}, {'3', 'd'}, {'4', 'e'}, {'5', 'f'}, {'6', 'g'}, {'7', 'h'}, {'8', 'i'}, {'9', 'j'}
    };
    
    for (int i = 0; i < str_age.size(); ++i)
    {
        answer += map_age[str_age[i]];
    }
    
    
    return answer;
}