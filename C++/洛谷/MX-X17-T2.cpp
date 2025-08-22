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
		int t;
		cin >> t;
		while (t--) {
			int n;
			cin >> n;
			vector<ll> a(n);
			ll sum = 0;
			ll minn = LLONG_MAX;
			bool flag = false;
			for (int i = 0; i < n; i++) {
				cin >> a[i];
				if (a[i] < 0) {
					sum += a[i];
					flag = true;
				} else {
					if (a[i] < minn) {
						minn = a[i];
					}
				}
			}
			if (flag) {
				cout << sum << endl;
			} else {
				cout << minn << endl;
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
