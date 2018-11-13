#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("LUTA.inp","r",stdin);
//	freopen("LUTA.out","w",stdout);
	long long n,c;
	cin >> n >> c;
	pair<long long , long long> a[n+1];
	for(long long i=0;i<n;i++)
	{
		cin >> a[i].first >> a[i].second;
	}

	sort(a+0,a+n);
	long long ans = 0;
	for(long long i=0;i<n;i++)
	{
		if(c>=a[i].first)
		{
			ans++;
			c += a[i].second;
		}
	}
	cout << ans;
	return 0;
}