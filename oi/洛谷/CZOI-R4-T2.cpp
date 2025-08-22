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
		int n, m, q;
		cin >> n >> m >> q;
		int atk = 0;
		vector<int> a(n + 5);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < q; i++) {
			int x;
			cin >> x;
			// 模拟
			for (int j = 0; j < n; j++) {
				int me = m, opponent = m;
				clog << "Round " << j << endl;
				if (a[i] < 0) {
					me += a[i];
					clog << "me : " << me << endl;
				}
				else {
					opponent -= a[i] + x;
					clog << "oppon. : " << opponent << endl;
				}
				if (me <= 0) {
					cout << "No" << endl;
					break;
				} else if (opponent <= 0) {
					cout << "Yes" << endl;
					break;
				}
				if (j == n && me > 0 && opponent > 0) cout << "Tie" << endl;
			}
			//int new_a = x[i] * n + atk;
			
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
