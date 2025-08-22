#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	const ll mod = 1000000007;
	const int maxn = 100005;
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		int t;
		cin >> t;
		vector<int> dp(100005);
		dp[0] = 1;
		dp[1] = 1;
		for (int i = 2; i <= 100005; i++) {
			dp[i] = (dp[i - 1] + ll(i - 1) * dp[i - 2]) % mod;
		}
		for (int i = 0; i < t; i++) {
			int n;
			cin >> n;
			cout << dp[n] << endl;
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
