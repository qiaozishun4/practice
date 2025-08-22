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
		int n, x;
		cin >> n;
		set<int> a;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			a.insert(temp);
		}
		cin >> x;
		if (a.find(x) == a.end()) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
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
