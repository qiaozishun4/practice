#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
	if (a.size() != b.size()) {
		return a.size() < b.size();
	} else {
		return a < b;
	}
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		string a, b;
		cin >> a >> b;
		string c, d;
		cin >> c >> d;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		sort(d.begin(), d.end());
		if (cmp(a, c) && cmp(b, d)) {
			cout << "Tong" << endl;
		} else {
			cout << "Mei" << endl;
		}
	}
	return 0;
}
