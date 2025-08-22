#include <bits/stdc++.h>

using namespace std;

int g_Arr[8005];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &g_Arr[i]);
	}
	for (int i = 0; i < m; i++) {
		int fun, x, val, sum;
		scanf("%d", &fun);
		switch (fun) {
			case 1:
				scanf("%d%d", &x, &val);
				g_Arr[x] = val;
				break;
			case 2:
				scanf("%d", &x);
				val = g_Arr[x];
				sum = n;
				for (int j = 1; j < x; j++) {
                    if (g_Arr[j] > val) sum--;
				}
				for (int j = x + 1; j <= n; j++) {
                    if (g_Arr[j] >= val) sum--;
				}
				printf("%d\n", sum);
				break;
		}
	}
	return 0;
}
