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
		
		int n;
		cin >> n;
		vector<int> p(n), j(n), s(n);
		for (int i = 0; i < n; i++) cin >> p[i];
		for (int i = 0; i < n; i++) cin >> j[i];
		for (int i = 0; i < n; i++) cin >> s[i];
		
		ll cnt = 0;
		for (int i = 0; i < n; i++) {
			int fenshu = s[i] - abs(p[i] - j[i]);
			if (fenshu < 0) fenshu = 0;
			cnt += fenshu;
		}
		
		cout << cnt << endl;
		
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
