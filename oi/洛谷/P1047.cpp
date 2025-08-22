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
		int l, m;
		cin >> l >> m;
		//bitset<1005> tree;
		vector<bool> tree(1005);
		for (int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
			for (int j = u; j <= v; j++) {
				tree[j] = 1;
			}
		}
		int ans = 0;
		for (int i = 0; i <= l; i++) {
			if (!tree[i]) ++ans;
		}
		cout << ans << endl;
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
