#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("CBOX.inp","r",stdin);
//	freopen("CBOX.out","w",stdout);
	long long n; cin >> n;
	long long m; cin >> m;
	long long b[n+1] = {0};
	long long a[n+1];
	long long l,r;
	for(long long i=1;i<=m;i++)
	{
		cin >> l >> r;
		b[l]++;
		b[r+1]--;
	}
	a[1] = b[1];
	for(long long i=2;i<=n;i++)
		a[i] = b[i] + a[i-1];
	sort(a+1,a+n+1);
	long long q; cin >> q;
	long long x;
	for(long long i=1;i<=q;i++)
	{
		cin >> x;
		cout << n - (lower_bound(a+1,a+n+1,x) - a) + 1 << endl;
	}
	return 0;
}
