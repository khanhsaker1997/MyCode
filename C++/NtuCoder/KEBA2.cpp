#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("KEBA2.inp","r",stdin);
//	freopen("KEBA2.out","w",stdout);
	long long n,b;
	cin >> n >> b;
	long long s;
	map<long long,long long> a;
	long long c[n+1];
	for(long long i=1;i<=n;i++)
	{
		cin >> c[i];
		a[c[i]]++;
	}
	long long tong = 0;
	//for(std::map<long long,long long>::iterator i = a.begin(); i != a.end(); i++)
	for(long long i=1;i<=n;i++)
	{
		if(b!=2*c[i])
		tong += a[b-c[i]];
		else
		tong += a[b-c[i]] -1;
	}
	cout << tong / 2;
	return 0;
}