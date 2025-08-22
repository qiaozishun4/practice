#include <bits/stdc++.h>

using namespace std;

bool Display(bool bFirst, int muli, int nPowNum)
{
	if (muli == 0) return bFirst ;
	
	string str;
	if (muli < 0) str = "-";
	else if (!bFirst  && muli > 0)str = "+";  
//printf("\n%d, %d, %s, %d\n", muli, nPowNum, str.c_str(), bFirst);
	if (abs(muli) != 1 || nPowNum == 0) str += to_string(abs(muli));

	
	if (nPowNum == 1)str += "x"; 
	else if (nPowNum >= 2) str += "x^"+to_string(nPowNum);

	cout << str;
	return false;
}
void PrintFunc(vector<int> f)
{
	if (f.size() == 0) return ;

	bool bFirst = true;
	for (int i = 0; i < f.size(); i++)
	{
		bFirst = Display(bFirst, f[i], f.size()-i-1);
	}
}
int main(){
	int n;
	vector<int> f;
	cin >> n;
	f.resize(n+1);
	for (int i = 0; i < f.size(); i++) cin >> f[i];
	
	bool bFirst = true;
	
	for (int i = 0; i < f.size(); i++)
	{
		bFirst = Display(bFirst, f[i], f.size()-i-1);
	}
}
