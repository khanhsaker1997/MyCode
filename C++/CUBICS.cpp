#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("CUBICS.inp","r",stdin);
//	freopen("CUBICS.out","w",stdout);
	long long n,k;
	cin >> n >> k;
	long long a[n+1];
	for(long long i=1;i<=n;i++)
		{
			cin >> a[i];
			a[i] -= k;
		}
	long long s[n+1];
	s[1] = a[1];
	for(long long i=2;i<=n;i++)
	{
		s[i] = s[i-1] + a[i];
	}
	//long long be[n+1],lon[n+1];
	map<long long,long long> lon;
	map<long long,long long> be;
	for(long long i=1;i<=n;i++)
	{
		lon[s[i]] = i;
	}
	for(long long i=n;i>0;i--)
	{
		be[s[i]] = i;
	}
	long long ans = 0,chiso;
	//s[0] = 0;
	for(long long i=1;i<=n;i++)
	{
		if(s[i] == 0 && ans <i)
		{
			ans = i;
			chiso = 1;
		}
		else
		if(ans < lon[s[i]] - be[s[i]])
		{
			ans = lon[s[i]] - be[s[i]];
			chiso = be[s[i]] + 1;
		}
	}
	if(ans!=0)
	cout << ans << ' ' << chiso;
	else cout << 0;
	return 0;
}