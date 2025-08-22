#include <bits/stdc++.h>
const int MAXN= 10E+8;
using namespace std;
vector<int> g_vcPrime;


void InitPrime(int n){
	int pos;
	g_vcPrime.resize(n + 10);
	//printf("%d", n);
	g_vcPrime[0] = 0;
	for (int i = 2; i <= n; i++){
		if (g_vcPrime[i] == 0) g_vcPrime[++g_vcPrime[0]] = i;
		pos = g_vcPrime[0];
		
		for (int j = 1; j <= pos; j++){
			if (i * g_vcPrime[j] > n) break;
			g_vcPrime[g_vcPrime[j] * i] = 1;
			if (i % g_vcPrime[j] == 0) break;
		}
	}
}

int main(){
	freopen("P3383_1.in", "r", stdin);
	long long n, m;
	cin >> n >> m;
	InitPrime(n);
	return 0;
	for (int i = 0; i < m; i++){
		cin >> n;
		cout << g_vcPrime[n] << endl;
	}
	return 0;
}
