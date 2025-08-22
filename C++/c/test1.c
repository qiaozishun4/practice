#include <stdio.h>
#define false 0
#define true !false
typedef int bool;

int main() {
	bool cnt = false;
	bool n = true;
	while (n) {
		int m;
		printf("%d\n", n);
		cnt++;
		if (cnt == 10) n = false;
	};
	return 0;
}
