#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	long long n;
	long long a;
	cin >> n;
	long long chan=0,le=0,tong=0;
	for(long long i=0;i<n;i++)
		{
			cin >> a;
			if(a%2==0) chan++;
			else le++;
			tong += a;
		}
	long long kq;
	if(tong%2 == 0)
	{
		kq = (chan*(chan-1))/2 + (le*(le-1))/2;
		cout << kq;
	} 
	else
	{
		kq = chan*le;
		cout << kq;
	}
	return 0;
}