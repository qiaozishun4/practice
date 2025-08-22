#include <bits/stdc++.h>
const int MAXN= 10E+8;
using namespace std;
vector<int> g_vcPrime;


void InitPrime(int n){
	g_vcPrime.resize(n + 10);
	g_vcPrime[0] = 0;
	for (int i = 2; i <= n; i++){
		if (g_vcPrime[i] != 0) continue;
		g_vcPrime[++g_vcPrime[0]] = i;
		for (int j = i; j <= n; j += i){
			g_vcPrime[j] = 1;
		}
	}
}

int main(){
	freopen("P3383_1.in", "r", stdin);
	int n, m;
	cin >> n >> m;
	InitPrime(n);
	return 0;
	for (int i = 0; i < m; i++){
		cin >> n;
		cout << g_vcPrime[n] << endl;
		
	}
	return 0;
}
