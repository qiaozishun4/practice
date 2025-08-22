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
			for (int i = 0; i < n; i++) {
				if (i % 2 == 0) {
					cout << -1;
				} else {
					if (i == n - 1) cout << 2;
					else cout << 3;
				}
				if (i < n - 1) {
					cout << " ";
				}
			}
			cout << endl;
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
