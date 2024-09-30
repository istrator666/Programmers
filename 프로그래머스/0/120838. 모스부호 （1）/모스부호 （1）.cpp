#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(string letter) {
    string answer = "";
    string str = "";
    unordered_map<string, char> um_letter; 
    um_letter[".-"] = 'a';
    um_letter["-..."] = 'b';
    um_letter["-.-."] = 'c';
    um_letter["-.."] = 'd';
    um_letter["."] = 'e';
    um_letter["..-."] = 'f';
    um_letter["--."] = 'g';
    um_letter["...."] = 'h';
    um_letter[".."] = 'i';
    um_letter[".---"] = 'j';
    um_letter["-.-"] = 'k';
    um_letter[".-.."] = 'l';
    um_letter["--"] = 'm';
    um_letter["-."] = 'n';
    um_letter["---"] = 'o';
    um_letter[".--."] = 'p';
    um_letter["--.-"] = 'q';
    um_letter[".-."] = 'r';
    um_letter["..."] = 's';
    um_letter["-"] = 't';
    um_letter["..-"] = 'u';
    um_letter["...-"] = 'v';
    um_letter[".--"] = 'w';
    um_letter["-..-"] = 'x';
    um_letter["-.--"] = 'y';
    um_letter["--.."] = 'z';
    
    for (int i = 0; i < letter.size(); ++i)
    {
        if (' ' == letter[i])
        {
            answer += um_letter[str];
            str = "";
        }
        else
        {
            str += letter[i];
        }
    }
    
    if (!str.empty())
    {
        answer += um_letter[str];
    }
        
    
    return answer;
}