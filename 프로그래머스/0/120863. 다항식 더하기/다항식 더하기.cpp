#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    int xcount = 0;
    int const_sum = 0;
    stringstream ss(polynomial);
    string token;

    while (ss >> token) {
        if (token == "+") continue;

        size_t x_pos = token.find('x');
        if (x_pos != string::npos) 
        {
            string coeff_str = token.substr(0, x_pos);
            if (coeff_str.empty()) 
            {
                xcount += 1;
            } else {
                xcount += stoi(coeff_str);
            }
        } else {
            const_sum += stoi(token);
        }
    }

    string answer;
    if (xcount != 0 && const_sum != 0) {
        if (xcount == 1) {
            answer = "x + " + to_string(const_sum);
        } else {
            answer = to_string(xcount) + "x + " + to_string(const_sum);
        }
    } else if (xcount != 0) {
        if (xcount == 1) {
            answer = "x";
        } else {
            answer = to_string(xcount) + "x";
        }
    } else if (const_sum != 0) {
        answer = to_string(const_sum);
    } else {
        answer = "0";
    }

    return answer;
}