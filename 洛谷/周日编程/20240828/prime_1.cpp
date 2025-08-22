#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e+6;
int g_arrPrime[MAXN];

void Init(int n) {
	for (int i = 2; i <= n; i++) {
		if (g_arrPrime[i] == 0) {
			g_arrPrime[++g_arrPrime[0]] = i;
			for (int j = i; j <= n; j += i) {
				g_arrPrime[j] = 1;
			}
		}
	}
}

int main() {
	Init(10);

	printf("%d\n", g_arrPrime[0]);
	return 0;
}
