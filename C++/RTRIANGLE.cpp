#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("RTRIANGLE.inp","r",stdin);
//	freopen("RTRIANGLE.out","w",stdout);
	long long n;
	cin >> n;
	long long i=1;
	while(n>0)
	{
		n -= i++;
	}
	if(n==0) cout << "YES";
	else cout << "NO";
	return 0;
}