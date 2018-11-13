#include <bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("DABI.inp","r",stdin);
//	freopen("DABI.out","w",stdout);
	long long n;
	cin >> n;
	long long m= n;
	long long tong = 0;
	while(n>0)
	{
		tong += n%10;
		n /= 10;
	}
	if(m % tong == 0) cout << "1";
	else cout << "0";
	return 0;
}