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
		int a, b;
		cin >> a >> b;
		if (a < 0 && b < 0) cout << "SouthWest" << endl;
		else if (a > 0 && b < 0) cout << "NorthWest" << endl;
		else if (a > 0 && b > 0) cout << "NorthEast" << endl;
		else cout << "SouthEast" << endl;
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
