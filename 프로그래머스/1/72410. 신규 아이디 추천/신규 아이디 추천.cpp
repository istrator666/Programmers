#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string step1 (string _new_id)
{
    transform(_new_id.begin(), _new_id.end(), _new_id.begin(), ::tolower);
    
    return _new_id;
}

string step2 (string _new_id)
{
    string s = "abcdefghijklmnopqrstuvwxyz0123456789-_.";
    string result = "";
    
    for (auto c : _new_id)
    {
        if (s.find(c) != string::npos)
        {
            result += c;
        }
    }
    
    return result;
}

string step3 (string _new_id)
{
    string result = "";
    bool dot_check = false;
    
    for (auto c : _new_id)
    {
        if (c == '.')
        {
            if (!dot_check)
            {
                result += c;
                dot_check = true;
            }
        }
        else
        {
            result += c;
            dot_check = false;
        }
    }
    
    return result;
}

string step4 (string _new_id)
{
    if (_new_id.front() == '.')
    {
        _new_id.erase(_new_id.begin());
    }
    
    if (_new_id.back() == '.')
    {
        _new_id.pop_back();
    }
    
    return _new_id;
}

string step5 (string _new_id)
{
    if (_new_id.empty())
    {
        _new_id = "a";
    }
    
    return _new_id;
}

string step6 (string _new_id)
{
    if (_new_id.size() >= 16)
    {
        _new_id = _new_id.substr(0, 15);
        
        if (_new_id.back() == '.')
        {
            _new_id.pop_back();
        }
    }
    
    return _new_id;
}

string step7 (string _new_id)
{
    while(_new_id.size() < 3)
    {
        _new_id += _new_id.back();
    }
    
    return _new_id;
}

string solution(string new_id) {
    string answer = new_id;
    
    answer = step1(answer);
    
    answer = step2(answer);
    
    answer = step3(answer);
    
    answer = step4(answer);
    
    answer = step5(answer);
    
    answer = step6(answer);
    
    answer = step7(answer);
    
    
    return answer;
}