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
		vector<ll> v, h;
		
		for (int i = 0; i < n; i++) {
			int t;
			ll k;
			cin >> t >> k;
			if (t == 1) v.push_back(k);
			else h.push_back(k);
		}
		
		sort(v.begin(), v.end());
		sort(h.begin(), h.end());
		
		ll sx, sy, tx, ty;
		cin >> sx >> sy >> tx >> ty;
		
		cout << (upper_bound(v.begin(), v.end(), max(sx, tx)) - lower_bound(v.begin(), v.end(), min(sx, tx))) + (upper_bound(h.begin(), h.end(), max(sy, ty)) - lower_bound(h.begin(), h.end(), min(sy, ty))) << endl;
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
