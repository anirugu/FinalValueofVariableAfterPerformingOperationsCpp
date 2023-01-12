#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int finalValueAfterOperations(vector<string>& operations) {
		int x = 0;
		for (auto c : operations) {
			if (c == "--X" || c == "X--")
				x--;
			else {
				x++;
			}
		}
		return x;
	}
};

int main()
{
	Solution sol;
	vector<string> operations{ "--X","X++","X++" };
	auto result1 = sol.finalValueAfterOperations(operations);
}
