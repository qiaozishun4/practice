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
			string s;
			cin >> a >> s;
			int ts = (1 << a) - 1;
			vector<bool> dp(ts + 1, false);
			dp[0] = true;
			for (int i = 1; i <= ts; ++i) {
				if (s[i - 1] == '1') continue;
				for (int sb = i; sb > 0; sb = (sb - 1) & i) {
					if (dp[sb ^ i]) {
						dp[i] = true;
						break;
					}
				}
			}
			if (dp[ts]) cout << "Yes" << endl;
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
