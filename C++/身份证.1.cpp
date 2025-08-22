#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int n11, n12, n13, n14, n15, n16, n17, n18;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
    cin >> n11 >> n12 >> n13 >> n14 >> n15 >> n16 >> n17;
    n18 = n1 * 7 + n2 * 9 + n3 * 10 + n4 * 5 + n5 * 8 + n6 * 4 + n7 * 2 + n8 * 1 + n9 * 6 + n10 * 3 + n11 * 7 + n12 * 9 + n13 * 10 + n14 * 5 + n15 * 8 + n16 * 4 + n17 * 2;
    n18 = (12 - (n18 % 11)) % 11;
    cout << "?????:" << endl;
    cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << n9 << n10;
    cout << n11 << n12 << n13 << n14 << n15 << n16 << n17;
    if (n18 == 10)
    {
    	cout << "X" << endl;
    }
    else
    {
    	cout << n18 << endl; // ???18?    	
    }

    return 0;
}
//????(2678067760360512)
