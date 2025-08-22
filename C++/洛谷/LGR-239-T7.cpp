#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	const ll INF = 1e18;
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int n, q;
		cin >> n >> q;
		vector<vector<ll>> y(n, vector<ll>(n));
		vector<vector<ll>> t(n, vector<ll>(n));
		for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> y[i][j];
		for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> t[i][j];
		vector<vector<ll>> ans(n, vector<ll>(n, INF));
		for (int u = 0; u < n; u++) {
			for (int v = 0; v < n; v++) {
				if (u == v) continue;
				if (y[u][v] != -1) ans[u][v] = min(ans[u][v], y[u][v]);
				for (int w = 0; w < n; w++) {
					if (w == u || w == v) continue;
					if (t[u][w] != -1 && t[w][v] != -1) ans[u][v] = min(ans[u][v], t[u][w] + t[w][v]);
				}
				if (ans[u][v] == INF) ans[u][v] = -1;
			}
		}
		while (q--) {
			int u, v;
			cin >> u >> v;
			cout << ans[u - 1][v - 1] << endl;
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
