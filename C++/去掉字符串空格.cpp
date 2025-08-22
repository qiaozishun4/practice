#include <bits/stdc++.h>

using namespace std;

void NoSpace(char szStr[])
{
	list<int> lstPos;
	int lenStr = 0;
	
	for (int i = 0; szStr[i] != 0; i++, lenStr++){
		if (szStr[i] != ' ') continue;
		lstPos.push_back(i);
	}
	list<int>::reverse_iterator iter = lstPos.rbegin();
	
	for (; iter != lstPos.rend(); iter++){
		strcpy(&szStr[*iter], &szStr[*iter + 1]);
	}
	
}

void noSpace(string &s) {
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			s.erase(i, i);
			--i, --len;
		}
	}
}

int main() {
	string a, b, c;
	//cin >> a >> b >> c;
	/*
	printf("%s", a.c_str());
	noSpace(a);
	printf("%s", a.c_str());
	*/
	/*
	char szText[128] = "test 12  34 5 6 7 8";
	gets(szText);
	//scanf("%127s\n", szText);
	printf("%s\n", szText);
	NoSpace(szText);
	printf("%s\n", szText);
	*/
	getline(cin, a);
	//getline(cin, b);
	//getline(cin, c);
	printf("%s\n", a.c_str());
	char test[100001] = a.c_str();
	NoSpace();
	printf("%s\n", a.c_str());
	return 0;
}
