#include <iostream>
#include <string>

using namespace std;

int fang(int a, int b) {
	for (int i = 0; i < b; i++) a *= a;
	return a;
}

int bintodec(string a) {
	int ans;
	for (int i = 1; i <= a.length(); i++) {
		for (int j = a.length() - 1; j >= 0; j--) {
			ans = ans + (int(a[i]) - '0') * fang(2, j);
			cout << ans << endl;
		}
	}
	return ans;
}

int main() {
	string a;
	cin >> a;
	//cout << bintodec(a) << endl;
	return 0;
}
