#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	bool isPrime(int n) {
		for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
		return true;
	}
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int n;
		cin >> n;
		for (int i = 4; i <= n; i += 2) {
			int target = i / 2;
			for (int j = 2; j <= target; j++) {
				if (isPrime(j) && isPrime(i - j)) {
					printf("%d=%d+%d\n", i, j, i - j);
					break;
				}
			}
		}
		return 0;
	}
};

int main() {
	/**
	 * Made By RealDream
	 */
	RealDream::main();
	return 0;
}
