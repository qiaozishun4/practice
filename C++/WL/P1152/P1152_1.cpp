#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> arr(n + 5);
	unordered_map<int,bool> ump;
	// init
	for (int i = 0; i < n - 1; ++i) {
		ump[i + 1] = false;
	}
	// scan
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
		if (i != 0) ump[abs(arr[i] - arr[i - 1])] = true;
	}
	// check
	bool flag = true;
	for (int i = 1; i <= n; ++i) {
		if (!ump[i]) {
			flag = true;
			break;
		}
	}
	if (flag) printf("Jolly\n");
	else printf("Not Jolly\n");
	return 0;
}
