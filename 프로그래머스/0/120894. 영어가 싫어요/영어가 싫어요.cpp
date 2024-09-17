#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    unordered_map<string, char> num_map = 
    {
        {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'}, {"five", '5'}, 
        {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'} 
    };
    string num_str;
    string temp;
    
    
    for (char c : numbers)
    {
        temp += c;
        
        if (num_map.find(temp) != num_map.end())
        {
            num_str += num_map[temp];
            temp = "";
        }
    }
    
    
    answer = stoll(num_str);
    
    return answer;
}