#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("BUBE.inp","r",stdin);
	long long n,k;
	cin >> n >> k;
	long long a[n+1];
	for(long long i=1;i<=n;i++)
		cin >> a[i];
	sort(a+1,a+n+1);
	long long j = n;
	long long ans = 0;
	for(long long i=n;i>=1;i--)
	{
		if(a[i] + k <= a[j]) j--;
		else ans = ans + a[i];
	}
	cout << ans;
	return 0;
}