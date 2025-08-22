#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0) continue;
		int x = i;
		bool flag = false;
		// ÊÇ·ñ°üº¬ 5
		while (x != 0) {
			if (x % 10 == 5) flag = true;
			x /= 10;
		}
		if (flag) printf("%d\n", i);
	}
	printf("\n");
    return 0;
}
