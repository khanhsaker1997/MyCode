#include <bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("NHGA.inp","r",stdin);
//	freopen("NHGA.out","w",stdout);
	long long n;
	cin >> n;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a+0,a+n);
	long long min1= a[1] - a[0];
	for(long long i=2;i<n;i++)
	{
		min1 = min(min1,a[i]-a[i-1]);
	}
	cout << min1;
	return 0;
}