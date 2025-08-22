#include <iostream>
#include <cstring>
#include <string>
using namespace std; 
string chengfa(string a, string b){
	int n = a.size();
    int m = b.size();
    
    int result[200] = {0};
    
    for (int i = 0; i < n; i++) {
        int digit_a = a[n-i-1] - '0';
        for (int j = 0; j < m; j++) {
            int digit_b = b[m-j-1] - '0';
            result[i+j] += digit_a * digit_b;
        }
    }
     
    for (int i = 0; i < n+m; i++) {
        result[i+1] += result[i] / 10;
        result[i] %= 10;
    }
    
    string result_str;
    int i = n + m - 1;
    while (i >= 0 && result[i] == 0) {
        i--;
    }
    for (; i >= 0; i--) {
        result_str += to_string(result[i]);
    }
	return result_str;
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << chengfa(a, b) << endl;
	return 0;
}
