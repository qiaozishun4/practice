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
			vector<int> c(n + 1);
			for (int i = 1; i <= n; i++) cin >> c[i];
			
			int cnt = 0;
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= c[i]; j++) {
					if (i == 1) cnt++;
					else if (j == 1 || j == c[i]) cnt++;
					else if ((i * j) % 10 == 6) cnt++;
				}
			}
			cout << cnt << endl;
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
