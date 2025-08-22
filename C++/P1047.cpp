#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	struct subway {
		int u, v;
	};
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int l, m;
		cin >> l >> m;
		bitset<1005> tree; 
		for (int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
#if 0
			for (int i = u; i <= v; i++) {
				tree[i] = 1;
			}
#endif
			int len = v - u + 1;
			bitset<1005> mask;
			mask.set();
			mask >>= (1005 - len);
			mask <<= u;
			tree |= mask;
		}
		int ans = 0;
		for (int i = 0; i < m; i++) {
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
