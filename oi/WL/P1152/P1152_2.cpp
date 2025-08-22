#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> arr(n + 5);
	set<int> s;
	// scan
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
		s.insert(abs(arr[i] - arr[i - 1]));
	}
	// check
	bool flag = true, i = 1;
	for (int i = 1; i < n; ++i) {
		if (s.find(i) == s.end()) {
			flag = true;
			break;
		}
	}
	if (flag) printf("Jolly\n");
	else printf("Not Jolly\n");
	return 0;
}
