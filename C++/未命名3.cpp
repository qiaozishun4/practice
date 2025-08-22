#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    char t[100] = {};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        int lent = strlen(t);
        for (int i = 0; i < lent; i++){
            switch (t[i]){
                case 'a':t[i] = 'A';break;
                case 'e':t[i] = 'E';break;
                case 'i':t[i] = 'I';break;
                case 'o':t[i] = 'O';break;
                case 'u':t[i] = 'U';break;
            }
        }
        for (int i = 0; i < lent; i++) cout << t[i];
        cout << endl;
    }
    return 0;
}
