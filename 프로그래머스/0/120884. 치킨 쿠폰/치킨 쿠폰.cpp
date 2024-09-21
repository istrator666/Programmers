#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupons = chicken;
    
    while(coupons >= 10)
    {
        int Check_coupons = coupons / 10;
        answer += Check_coupons;
        coupons = Check_coupons + (coupons % 10);
    }
    
    return answer;
}