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
		int n, k, pos = 0;
		cin >> n >> k;
		deque<int> a(n), b(n);
		vector<int> new_p(n + 5);
		for (int i = 0; i < k; i++) cin >> a[i];
		for (int i = k; i < n; i++) cin >> b[i];
		for (int i = 0; i < n; i++) {
			bool ae = a.empty(), be = b.empty();
			if (!ae && !be) {
				new_p[pos++] = a[i];
				new_p[pos++] = b[i];
				a.pop_front();
				b.pop_front();
			} else {
				if (ae) {
					int len = b.size();
					for (int j = 0; j < len; j++) {
						new_p[pos++] = b[i];
						b.pop_front();
					}
				} else {
					int len = a.size();
					for (int j = 0; j < len; j++) {
						new_p[pos++] = a[i];
						a.pop_front();
					}
				}
			}
		}
		for (auto it : new_p) {
			cout << it << ' ';
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
