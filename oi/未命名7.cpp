#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*
	vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	int len = nums.size();
	for (int i = 1; i < len; i++) {
		if (nums[i] == nums[i - 1]) {
			nums.erase(i + nums.begin());
			i--;
			len--;
		}
	}
	/*
	for (auto i = nums.begin(); i < nums.end();) {
		if (*i == 0) continue;
		if (nums[*i] == nums[*i - 1]) i = nums.erase(i);
		else i++;
	}
	/*
	for (int i = 0; i < len; i++) {
		cout << nums[i] << " ";
	}
	*/
	
}
