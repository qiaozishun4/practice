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
		while (n--) {
			int a;
			cin >> a;
			string s;
			cin >> s;
			int target = 1 << a;
			vector<bool> dp(target, false);
			dp[0] = true;
			for (int i = 1; i < target; i++) {
				int dic = i - 1;
				if (s[dic] == '1') {
					dp[i] = false;
				} else {
					bool fnd = false;
					for (int j = 0; j < a; j++) {
						if (i & (1 << j)) {
							int p = i ^ (1 << j);
							if (dp[p]) {
								fnd = true;
								break;
							}
						}
					}
					dp[i] = fnd;
				}
			}
			if (dp[target - 1]) cout << "Yes" << endl;
			else cout << "No" << endl;
			
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
