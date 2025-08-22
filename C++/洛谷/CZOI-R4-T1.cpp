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
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		vector<int> ad(n + 5);
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> ad[i] >> x >> y;
			if (x == false && y == false) continue;
			else if (x == true && y == true) ad[i] = -1;
			else if (x == true) ad[i] -= k1;
			else ad[i] -= k2;
		}
		
		int maxn = *max_element(ad.begin(), ad.end());
		
		if (maxn < 0) cout << -1 << endl;
		else cout << maxn << endl;
		
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
