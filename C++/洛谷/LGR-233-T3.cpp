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
		// x 初始积分，y 上限
		int n, x, y;
		cin >> n >> x >> y;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			if (x < y && x >= a) {
				x = x - a + b;
			} else {
				break;
			}
		}
		cout << x << endl;
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
