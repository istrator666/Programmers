#include <string>
#include <vector>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int Ivideo_len = (stoi(video_len.substr(0, 2)) * 60) + stoi(video_len.substr(3, 2));
    int Ipos = (stoi(pos.substr(0, 2)) * 60) + stoi(pos.substr(3, 2));
    int Iop_start = (stoi(op_start.substr(0, 2)) * 60) + stoi(op_start.substr(3, 2));
    int Iop_end = (stoi(op_end.substr(0, 2)) * 60) + stoi(op_end.substr(3, 2));
    
    for (int i = 0; i < commands.size(); ++i)
    {
        if (Ipos >= Iop_start && Ipos <= Iop_end) 
        {
            Ipos = Iop_end;
        }
        
        if ("next" == commands[i])
        {
            Ipos += 10;
            if (Ipos > Ivideo_len)
            {
                Ipos = Ivideo_len;
            }
        }
        else if ("prev" == commands[i])
        {
            Ipos -= 10;
            if (0 > Ipos)
            {
                Ipos = 0;
            }
        }
        
        if (Ipos >= Iop_start && Ipos <= Iop_end)
        {
            Ipos = Iop_end;
        }
    }
    
    int pos_min = Ipos / 60;
    int pos_sec = Ipos % 60;
    
    string mm = (pos_min < 10) ? "0" + to_string(pos_min) : to_string(pos_min);
    string ss = (pos_sec < 10) ? "0" + to_string(pos_sec) : to_string(pos_sec);
    
    return answer = mm + ":" + ss;
}