#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int time_count = 0;
    int time_bandage = 0;
    int time_attcheck = 0;
    int hp = health;

    int last_attack_time = 0;
    for(auto &attack : attacks)
    {
        if(attack[0] > last_attack_time)
        {
            last_attack_time = attack[0];
        }
    }

    while(time_count <= last_attack_time && hp > 0)
    {
        bool isbandage = true;
        
        if (time_attcheck < attacks.size())
        {
            if (time_count == attacks[time_attcheck][0])
            {
                isbandage = false;
                hp -= attacks[time_attcheck][1];
                time_bandage = 0;
                time_attcheck++;
                
                if (hp <= 0)
                {
                    return -1;
                }
            }
        }
        
        if (isbandage)
        {
            hp += bandage[1];
 
            if (time_bandage + 1 == bandage[0])
            {
                hp += bandage[2];
                time_bandage = 0;
            }
            else
            {
                time_bandage++;
            }
        
            if (hp > health)
            {
                hp = health;
            }
        }
        
        ++time_count;
    }
    
    while(time_bandage > 0 && hp > 0)
    {
        hp += bandage[1];
        
        if (time_bandage + 1 == bandage[0])
        {
            hp += bandage[2];
            time_bandage = 0;
        }
        else
        {
            time_bandage++;
        }
        
        if (hp > health)
        {
            hp = health;
        }
        
        ++time_count;
    }
    
    return hp;
}