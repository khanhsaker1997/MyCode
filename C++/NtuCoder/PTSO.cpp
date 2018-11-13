#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("PTSO.inp","r",stdin);
//	freopen("PTSO.out","w",stdout);
	long long n;
	cin >> n;
	long long a[n+1] = {0};
	for(long long i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
			for(long long j=i*i;j<=n;j+=i)
				a[j] = i;
			a[i]=i;
		}
	}
	long long d[n];
	long long dem = 0;
	while(n>1)
	{
		long long u = a[n];
		while(n % u == 0)
		{
			n /= u;
			d[dem++] = u;
		}
	}
	sort(d+0,d+dem);
	for(long long i=0;i<dem-1;i++)
		cout << d[i] << '*';
	cout << d[dem-1];
	return 0;
}