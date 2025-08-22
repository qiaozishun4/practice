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
		int x, a, b, t;
		cin >> x >> a >> b >> t;
		if (x < 60) cout << 0 << endl;
		else if (x >= 60 && x < 120) cout << a << endl;
		else if (x >= 120 && x < 240) cout << b << endl;
		else cout << t << endl;
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
