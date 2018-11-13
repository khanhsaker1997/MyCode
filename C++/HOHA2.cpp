#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("PTSO.inp","r",stdin);
//	freopen("PTSO.out","w",stdout);
	long long n;
	cin >> n;
	long long tong = 0;
	for(long long i=1;i*i<=n;i++)
		if(n%i == 0)
		{
			tong += i+ n/i;
		}
	if(tong -n == n) cout << "YES";
	else cout << "NO";
	return 0;
}