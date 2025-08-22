#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> dp(100);
	dp[1] = 1;
	printf("1, ");
	for (int i = 2; i <= 45; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
		printf("%d, ", dp[i]);
	}
	return 0;
}
