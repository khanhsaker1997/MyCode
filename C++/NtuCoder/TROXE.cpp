#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TROXE.inp","r",stdin);
//	freopen("TROXE.out","w",stdout);
	long long k;
	cin >> k;
	map<long long,long long> a;
	long long b;
	for(long long i=0;i<k;i++)
	{
		cin >> b;
		a[b]++;
	}
	long long tong = 0;
	for(map<long long,long long>::iterator i=a.begin();i!=a.end();i++)
		{
			if(i->second > 5) tong += 100 +(i->second - 5);
			else tong += 100;
		}
	cout << tong;
	return 0;
}