#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("KSMA.inp","r",stdin);
	freopen("KSMA.out","w",stdout);
	long long n,k,s,c1,c2,m;
	cin >> n >> k>> s >> c1 >> c2 >> m;
	long long a[n];
	a[0] = s;
	long long minn = a[0];
	for(long long i=1;i<n;i++)
	{
		a[i] = (c1 * a[i-1] + c2)%m;
		minn = min(minn,a[i]);
	}
	sort(a+0,a+n);
	for(long long i=0;i<k;i++)
		cout << a[i] << ' ';
	return 0;
}