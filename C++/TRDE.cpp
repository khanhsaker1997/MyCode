#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("TRDE.inp","r",stdin);
//	freopen("TRDE.out","w",stdout);
	long long k;
	cin >> k;
	k = 2*k;
	long long minn = LLONG_MAX;
	long long n;
	long long a=0,b=0;
	for(long long i=0;i<=sqrt(k);i++)
	{
		n = (k-1-i) / (2*i+1);
		if((n*i+(n+1)*(i+1)) == k && i<=n)
			{
				if((n-i) < minn )
				{
					minn = n-i;
					a = i;
					b = n;
				}
			}
	}
	if(a*b != 0)
		cout << a << ' ' << b;
	else
		cout << -1;
	return 0;
}