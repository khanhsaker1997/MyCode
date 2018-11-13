#include <bits/stdc++.h>
using namespace std;
//long long a[1000001] = {0};
int main()
{
//	freopen("MOBI.inp","r",stdin);
//	freopen("MOBI.out","w",stdout);
// *upper_bound(a+1,a+n+1,v) = gia tri dau tien lon hon v;
// *lower_bound(a+1,a+n+1,v) = gia tri dau tien long >= v;
// *upper_bound(a+1,a+n+1,v)-a = chi so dau tien co gia tri lon hon v;
	ios_base::sync_with_stdio(0);
	long long n,k;
	cin >> n >> k;
	long long a[n],b[n];
	pair<long long ,long long>m[n];
	for(long long i=0;i<n;i++)
	{
		cin >> m[i].first >> m[i].second;
	}
	sort(m+0,m+n);
	for(long long i=0;i<n;i++)
	{
		a[i] = m[i].first;
	}
	b[0] = m[0].second;
	for(long long i=1;i<n;i++)
		b[i] = m[i].second + b[i-1];
	long long maxx = 0;
	long long tong = 0;
	b[-1] = 0;
	for(long long i=0;i<n;i++)
	{
		tong = 0;
		long long j = upper_bound(a+i,a+n,a[i]+2*k) - a-1;
		//cout << j << endl;
		maxx = max(maxx,b[j] - b[i-1]);
	}
	cout << maxx;
	return 0;
}