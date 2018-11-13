#include <bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
	freopen("chenhlech.inp","r",stdin);
	long long n,q;
	cin >> n >> q;
	a[0] = 0;
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i];
		a[i] += a[i-1];
	}
	long long u,v;
	for(long long i=1;i<=q;i++)
	{
		cin >> u >> v;
		double tong = (double)a[v] + (double)a[u-1];
		long long b = lower_bound(a+u,a+v,tong/2) - a;
		long long c = upper_bound(a+u,a+v,tong/2) -a - 1;
		long long ans = min(2*a[b] - tong, tong - 2*a[c]);
		cout << ans << endl;
	}
	return 0;
}