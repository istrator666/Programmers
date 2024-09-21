#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    string id = id_pw[0];
    string pw = id_pw[1];
    
    for (int i = 0; i < db.size(); i++)
    {
        string db_id = db[i][0];
        string db_pw = db[i][1];
        
        if (db_id == id)
        {
            if (db_pw == pw)
            {
                return answer = "login";
            }
            else
            {
                return answer = "wrong pw";
            }
        }
    }
    
    
    return answer = "fail";
}