#include <bits/stdc++.h>
using namespace std;
vector<int> g_vcPrime;

void InitPrime(long long n){
	int pos;
	g_vcPrime.resize(n + 10);
	//printf("%d", n);
	g_vcPrime[0] = 0;
	for (long long i = 2; i <= n; i++){
		if (g_vcPrime[i] == 0) g_vcPrime[++g_vcPrime[0]] = i;
		pos = g_vcPrime[0];
		
		for (long long j = 1; j <= pos; j++){
			if (i * g_vcPrime[j] > n) break;
			g_vcPrime[g_vcPrime[j] * i] = 1;
			if (i % g_vcPrime[j] == 0) break;
		}
	}
}

int main(){
	long long l, r;
	cin >> l >> r;
	InitPrime(r);
	int posLeft = 1, cnt = 0;
	
	while (g_vcPrime[posLeft] < l){
		posLeft++;
	}
	
	while (g_vcPrime[posLeft] >= l && g_vcPrime[posLeft] <= r){
		cnt++;
		posLeft++;
	}
	cout << cnt << endl;
	return 0;
}
