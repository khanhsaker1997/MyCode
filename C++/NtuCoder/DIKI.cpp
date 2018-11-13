#include <bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("DIKI.inp","r",stdin);
//	freopen("DIKI.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
	{
		if(binary_search(a+i,a+n,a[i]+m))
		{
			for(int j=i+1;j<n;j++)
				if(a[j] - a[i] == m)
				{
					cout << a[i] << ' ' << a[j];
					return 0;
				}
		}
	}
	cout << -1;
	return 0;
}