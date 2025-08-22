#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int n, k;
		cin >> n >> k;
		cout << n + (n - 1) / (k - 1) << endl;
		/*
		int d = n, ans = n;
		while (d >= k) {
			ans += d / k;
			d %= k;
		}
		cout << ans << endl;
		*/
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
