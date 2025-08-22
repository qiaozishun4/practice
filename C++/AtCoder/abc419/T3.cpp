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
		vector<ll> r(n), c(n);
		ll minr = LLONG_MAX, maxr = LLONG_MIN, minc = LLONG_MAX, maxc = LLONG_MIN;
		
		for (int i = 0; i < n; i++) {
			cin >> r[i] >> c[i];
			if (r[i] < minr) minr = r[i];
			if (r[i] > maxr) maxr = r[i];
			if (c[i] < minc) minc = c[i];
			if (c[i] > maxc) maxc = c[i];
		}
		
		cout << max(((maxr - minr) + 1) / 2, ((maxc - minc) + 1) / 2) << endl;
		
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
