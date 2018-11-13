#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("KSAN.inp","r",stdin);
//	freopen("KSAN.out","w",stdout);
	long long n; cin >> n;
	pair <long long,long long> a[n+1];
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i].first;
	}
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i].second;
	}
	sort(a+1,a+n+1);
	long long b[n+1],c[n+1];
	for(long long i=1;i<=n;i++)
	{
		b[i] = a[i].first;
		c[i] = b[i] + a[i].second;
	}
	long long d[n+1];
	for(long long i=1;i<=n;i++)
		d[i] = c[i];
	sort(d+1,d+n);
	long long ans = 0;
	long long temp;
	for(long long i=1;i<=n;i++)
	{
		temp =(lower_bound(b+1,b+n+1,c[i]) - b)-1 -(((lower_bound(d+1,d+n+1,b[i]) - d))) ;
		cout << temp << ' ';
		ans = max(ans,temp);
	}
	cout << ans;
	return 0;
}