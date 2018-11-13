#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("DAYSO2.inp","r",stdin);
//	freopen("DAYSO2.out","w",stdout);
	long long n;
	cin >> n;
	long long a[n+1];
	long long f[n+1] = {0};
	for(long long i=1;i<=n;i++)
		cin >> a[i];
	a[0] = 0;
	for(long long i=1;i<=n;i++)
		a[i] += a[i-1];
	long long maxx = LLONG_MIN;
	for(long long i=3;i<=n;i++)
	{
		f[i] = max(a[i]-a[i-3],f[i-3]+a[i]-a[i-3]);
		maxx = max(maxx,f[i]);
	}
	cout << maxx;
	return 0;
}