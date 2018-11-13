#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("TIVI2.inp","r",stdin);
//	freopen("TIVI2.out","w",stdout);
	long long n; cin >> n;
	pair <long long,long long> a[n+1];
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a+1,a+n+1);
	long long b[n+1],c[n+1];
	for(long long i=1;i<=n;i++)
	{
		b[i] = a[i].first;
		c[i] = a[i].second;
	}
	long long ans = 0;
	long long temp;
	for(long long i=1;i<=n;i++)
	{
		temp = (lower_bound(b+i+1,b+n+1,c[i]) - b) - i -1;
		ans += temp;
	}
	cout << ans;
	return 0;
}