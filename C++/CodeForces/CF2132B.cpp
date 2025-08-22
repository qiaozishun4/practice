#include <bits/stdc++.h>

using namespace std;

namespace RealDream {
	typedef long long ll;
	typedef unsigned long long ull;
	int main() {
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		
		vector<ll> pows{1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000, 100000000000, 1000000000000, 10000000000000, 100000000000000, 1000000000000000, 10000000000000000, 100000000000000000, 1000000000000000000};
		
		int t;
		cin >> t;
		while (t--) {
			ll n;
			cin >> n;
			vector<ll> ans;
			
			for (int k = 1; k <= 18; k++) {
				ll d = pows[k] + 1;
				if (d > n) break;
				if (n % d == 0) ans.push_back(n / d);
			}
			
			sort(ans.begin(), ans.end());
			if (ans.empty()) {
				cout << 0 << endl;
			} else {
				cout << ans.size() << endl;
				for (ull i = 0; i < ans.size(); i++) {
					if (i > 0) cout << ' ';
					cout << ans[i];
				}
				cout << endl;
			}
		}
		return 0;
	}
};

int main() {
	RealDream::main();
	return 0;
}

