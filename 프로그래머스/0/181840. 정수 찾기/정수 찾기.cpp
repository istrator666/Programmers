#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
	int answer = 0;
	

	if (num_list.end() != find(num_list.begin(), num_list.end(), n))
	{
		answer = 1;
	}

	return answer;
}