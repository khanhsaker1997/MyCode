#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("HASA.inp","r",stdin);
//	freopen("HASA.out","w",stdout);
	long long n;
	cin >> n;
	priority_queue< long long,vector<long long>,greater<long long> > q;
	long long a;
	for(long long i=1;i<=n;i++)
	{
		cin >> a;
		q.push(a);
	}
	long long x,y;
	long long ans = 0;
	for(long long i=1;i<n;i++)
	{
		x = q.top(); q.pop();
		y = q.top(); q.pop();
		ans += x+y;
		q.push(x+y);
	}
	cout <<  ans;
	return 0;
}