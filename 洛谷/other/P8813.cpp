#include <stdio.h>
#include <limits.h>
#include <stdint.h>

uint64_t ksm(uint64_t x, uint64_t y) {
	uint64_t ans = 1;
	while (y) {
		if (x > 1e9) {
			return -1;
		}
		if (y & 1) ans = ans * x;
		y >>= 1;
		x = x * x;
	}
	return ans;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n == 1) {
		printf("%d", 1);
		return 0;
	}
	if (m == 1) {
		printf("%d", n);
		return 0;
	}
	uint64_t ans = ksm(n, m);
	if (ans > 1e9) {
		printf("-1");
	} else {
		printf("%lld", ans);
	}
	return 0;
}
