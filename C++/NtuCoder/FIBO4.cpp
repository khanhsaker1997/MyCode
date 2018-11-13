#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	long long n;
	cin >> n;
	long long f[n+1];
	f[1] = f[2] =1;
	for(long long i=3;i<=n;i++)
	{
		f[i] = (f[i-1] + f[i-2])% 1000007;
	}
	cout <<f[n];
	return 0;
}