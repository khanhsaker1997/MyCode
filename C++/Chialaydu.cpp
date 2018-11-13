#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("Chialaydu.inp","r",stdin);
//	freopen("Chialaydu.out","w",stdout);
	long long n,k;
	cin  >> n >> k;
	long long a[n];
	long long temp;
	for(long long i=0;i<n;i++)
	{
		cin >> temp;
		a[i] = temp % k;
	}
	sort(a+0,a+n);
	long long dem = 1;
	for(long long i=1;i<n;i++)
	{
		if(a[i] > a[i-1]) dem ++;
	}
	cout << dem;
	return 0;
}