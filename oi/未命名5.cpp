#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b) {
	return a > b;	
}

int main() {
	int n, nums[101] = {};
	cin >> n;
	for (int i = 0; i < n; i++) cin >> nums[i];
	sort(nums, nums + n, cmp);
	//for (int i = 0; i < n; i++) cout << nums[i] << " ";
	cout << nums[0] << endl;
	return 0;
}
