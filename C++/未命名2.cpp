#include <iostream>

using namespace std;

int tmall(int w){
	return w >= 500 ? w - w / 10 : w;
}

int jd(int w){
	return w >= 1000 ? w - 150 : w;
}

int tiktok(int w){
	return w == 1111 ? 0 : w - w / 20;
}

int bijiao(int w){
	return min(min(tmall(w), jd(w)), tiktok(w));
}

int main(){
    int n, w = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> w;
        cnt += bijiao(w);
    }
    cout << cnt;
    return 0;
}
