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
		
		int n, val, L;
		cin >> n >> val >> L;
		vector<ll> A(n);
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		
		vector<ll> pref(n+1, 0);
		for (int i = 0; i < n; i++) {
			pref[i+1] = pref[i] + A[i];
		}
		
		vector<ll> C(n - L + 1, 0);
		ll s0 = pref[L] - pref[0];
		ll C1_val = (val - (s0 % val)) % val;
		for (int i = 0; i <= n - L; i++) {
			ll s = pref[i+L] - pref[i];
			s %= val;
			C[i] = (val - s) % val;
		}
		
		vector<vector<ll>> g(L, vector<ll>(val, LLONG_MAX));
		
		for (int r = 0; r < L; r++) {
			vector<int> points;
			int j = r;
			while (j <= n - L) {
				points.push_back(j);
				j += L;
			}
			int len = points.size();
			if (len == 0) continue;
			
			vector<ll> D;
			for (int i = 0; i < len-1; i++) {
				D.push_back(C[points[i]] - C[points[i] + 1]);
			}
			
			ll S0 = 0;
			for (ll d : D) {
				S0 += d;
			}
			
			vector<ll> S_vec(len, 0);
			if (len > 1) {
				S_vec[len-1] = 0;
				if (len-2 >= 0) {
					S_vec[len-2] = D[len-2];
				}
				for (int i = len-3; i >= 0; i--) {
					S_vec[i] = D[i] + S_vec[i+1];
				}
			}
			
			for (int z = 0; z < val; z++) {
				ll a0 = (z - S0) % val;
				if (a0 < 0) a0 += val;
				
				vector<ll> T(len, 0);
				if (len >= 1) {
					T[len-1] = 0;
					if (a0 + S_vec[len-1] < 0) {
						ll ceil_val = (-(a0 + S_vec[len-1]) + val - 1) / val;
						T[len-1] = ceil_val;
					}
				}
				
				for (int i = len-2; i >= 0; i--) {
					T[i] = 0;
					if (a0 + S_vec[i] < 0) {
						T[i] = (-(a0 + S_vec[i]) + val - 1) / val;
					}
					T[i] = max(T[i], T[i+1]);
				}
				
				ll cost = 0;
				for (int i = 0; i < len; i++) {
					cost += a0;
					cost += S_vec[i];
					cost += static_cast<ll>(val) * T[i];
				}
				g[r][z] = cost;
			}
		}
		
		vector<vector<ll>> dp(L+1, vector<ll>(val, LLONG_MAX));
		dp[0][0] = 0;
		
		for (int r = 0; r < L; r++) {
			vector<ll> dp2(val, LLONG_MAX);
			for (int s = 0; s < val; s++) {
				if (dp[r][s] == LLONG_MAX) continue;
				for (int z = 0; z < val; z++) {
					if (g[r][z] == LLONG_MAX) continue;
					int new_s = (s + z) % val;
					if (dp2[new_s] > dp[r][s] + g[r][z]) {
						dp2[new_s] = dp[r][s] + g[r][z];
					}
				}
			}
			for (int s = 0; s < val; s++) {
				dp[r+1][s] = dp2[s];
			}
		}
		
		cout << dp[L][C1_val] << endl;
		
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
