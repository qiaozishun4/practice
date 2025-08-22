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
		vector<int> tree(15);
		int n;
		for (int i = 0; i < 10; i++) {
			cin >> tree[i];
		}
		cin >> n;
		int ans = 0;
		for (int i = 0; i < 10; i++) {
			if (tree[i] - 30 <= n) ++ans;
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
