#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	double ans = 0;
	for (int i = 1, j = 1; i <= n; i++, j += 2) {
		if (i & 1) sum += j;
		else sum -= j;
		ans += 1.0 / sum;
	}
	printf("%.3lf\n", ans);
	return 0;
}
