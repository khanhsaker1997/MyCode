#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("DACO.inp","r",stdin);
//	freopen("DACO.out","w",stdout);
	long long n; cin >> n;
	long long a[n+1] = {0};long long l[n+1], maxx=1;
	long long vt[n+1][n+1] = {0};
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i];l[i] = 1;
		
		for(long long j=1;j<i;j++)
		{
			if(a[j] < a[i] && l[i] < l[j]+1)
			{

				l[i] = l[j] + 1;
				maxx = max(maxx,l[i]);
				vt[j][i] = j;
			}
		}
	}
	// if(maxx == 0)
	// 	{
	// 		cout << 1 << endl << a[1];
	// 		return 0;
	// 	}
	cout << maxx << endl;
	long long dem = 0;
	for(long long i=1;i<=n;i++)
	{
		if(l[i]==maxx)
		{
			for(long long j=1;j<=n;j++)
			{
				if(a[vt[j][i]] != 0)
				{
				cout << a[vt[j][i]] << ' ';
				}
			}
			cout << a[i];
			return 0;
		}

	}
	return 0;
}