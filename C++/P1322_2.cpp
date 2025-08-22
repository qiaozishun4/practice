#include <bits/stdc++.h>

using namespace std;

char str[1001];

// 10 Byte
struct repeat {
	bool ing = true, once = true;
	int times, now = 0;
};

int str_to_int(char str[]) {
	int ans = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		ans += str[i] - '0';
		ans *= 10;
	}
	ans /= 10;
	return ans;
}

int read_number(char str[]) {
	int ans = 0;
	for (int i = 0; ; i++) {
		if (!isdigit(str[i])) break;
		ans += str[i] - '0';
		ans *= 10;
	}
	ans /= 10;
	return ans;
}

void plus_now(deque<repeat> rt) {
	int len = rt.size();
	for (int i = 0; i < len; i++) {
		if (rt[i].ing) {
			++rt[i].now;
		}
	}
}

bool is_repeating(deque<repeat> rt) {
	int len = rt.size();
	for (int i = 0; i < len; i++) {
		if (rt[i].ing) return true;
	}
	return false;
}

int main() {
	int pos = 0;
	bool fd = false, bk = false;
	deque<repeat> rt;
	while (~scanf("%s", str)) {
		if (is_repeating(rt)) {
			if (rt.back().once) {
				rt.back().once = false;
				rt.back().times = read_number(str);
				plus_now(rt);
			}
			if (fd) {
				fd = false;
				pos += str_to_int(str);
				continue;
			}
			if (bk) {
				bk = false;
				pos += str_to_int(str);
				continue;
			}
			if (str[0] == 'F') {
				fd = true;
				continue;
			}
			if (str[0] == 'B') {
				bk = true;
				continue;
			}
		} else {
			if (fd) {
				fd = false;
				pos += str_to_int(str);
				continue;
			}
			if (bk) {
				bk = false;
				pos += str_to_int(str);
				continue;
			}
			if (str[0] == 'F') {
				fd = true;
				continue;
			}
			if (str[0] == 'B') {
				bk = true;
				continue;
			}
			if (str[0] == 'R') {
				rt.push_back({});
			}
		}
	}
	printf("%d", pos);
	return 0;
}
