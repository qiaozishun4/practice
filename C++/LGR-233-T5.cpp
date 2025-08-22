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
		int n, k, q;
		cin >> n >> k;
		k += 1;
		vector<int> p(k + 5);
		for (int i = 0; i < k; i++) {
			cin >> p[i];
		}
		int len = p.size();
		cin >> q;
		for (int i = 0; i < q; i++) {
			int a, b;
			cin >> a >> b;
			if (a == b) {
				cout << 1 << endl;
				continue;
			}
			if (a > b) swap(a, b);
			int cnt = 0;
			for (int j = 0; j < len; j++) {
				if (a >= p[j] && b <= p[j]) cnt++;
			}
			if (cnt == 1) cout << 2 << endl;
			else cout << 2 + cnt << endl;
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
