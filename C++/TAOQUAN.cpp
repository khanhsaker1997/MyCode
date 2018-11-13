#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	int m,n,k;
	cin >> n >> m >> k;
	int x = min(min(n/2,m),(m+n-k)/3);
	cout << x;
	return 0;
}