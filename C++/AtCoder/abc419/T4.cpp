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
		
		int n, m;
		cin >> n >> m;
		string s, t;
		cin >> s >> t;
		
		vector<int> nums(n + 2, 0);
		
		for (int i = 0; i < m; i++) {
			int l, r;
			cin >> l >> r;
			nums[l - 1] ^= 1;
			nums[r] ^= 1;
		}
		
		int a = 0;
		for (int i = 0; i < n; i++) {
			a ^= nums[i];
			if (a) {
				cout << t[i];
			} else {
				cout << s[i];
			}
		}
		cout << endl;
		
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
