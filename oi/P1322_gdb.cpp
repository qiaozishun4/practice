#include <bits/stdc++.h>
#ifndef __DEBUG_LIB
#define __DEBUG_LIB

bool isdebug = false;

#define change(x) isdebug = x
#define Debugc \
	if (isdebug) cout
#define Debug if (isdebug)

#endif
using namespace std;

#define LL long long
#define Pii pair<int, int>
#define ULL unsigned long long

int r_brk[1058410];
stack<int> st;
LL solve(string str, int start) {
	LL ans = 0;
	int oper = 0;
	for (int i = 0; i < (int)str.size(); ++i) {
		if (oper == 0) {
			string tmp;
			for (; i < (int)str.size() && isalpha(str[i]); ++i) {
				tmp += str[i];
			}
			if (tmp[0] == 'F') {
				oper = 1;
			} else if (tmp[0] == 'B') {
				oper = 2;
			} else if (tmp[0] == 'R') {
				oper = 3;
			}
			--i;
		} else if (oper == 1 || oper == 2) {
			LL tmp = 0;
			for (; i < (int)str.size() && isdigit(str[i]); ++i) {
				tmp = tmp * 10 + (int)(str[i] - '0');
			}
			if (oper == 1) {
				ans += tmp;
			} else {
				ans -= tmp;
			}
			oper = 0;
			--i;
		} else {
			LL tmp = 0;
			for (; i < (int)str.size() && isdigit(str[i]); ++i) {
				tmp = tmp * 10 + (int)(str[i] - '0');
			}
			ans += tmp * solve(str.substr(i + 1, r_brk[i + start] - 1 - i - start), i + 1);
			i = r_brk[i + start];
			oper = 0;
		}
	}
	return ans;
}

char str[1001];

int main() {
	scanf("%[^\n]", str);
	int len = strlen(str);
	for (int i = 0; i < len; ++i) {
		if (str[i] == '[') st.push(i);
		else if (str[i] == ']') {
			r_brk[st.top()] = i;
			st.pop();
		}
	}
	cout << llabs(solve(str, 0)) << endl;
	return 0;
}
