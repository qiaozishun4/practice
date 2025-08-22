#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	float ans = n * (1 + 0.00417);
	for (int i = 1; i < 6; i++) {
		ans = (n + ans) * (1 + 0.00417);
	}
	printf("%.2f", ans);
	return 0;
}
