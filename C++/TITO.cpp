#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("TITO.inp","r",stdin);
//	freopen("TITO.out","w",stdout);
	double a,b;
	cin >> a >> b;
	long long tong;
	long long c = (long long)a;
	long long d = (long long)b;
	tong = (c+d)*(d-c+1)/2;
	if(c==a)
	cout << tong;
	else
		cout <<tong - c;
	return 0;
}