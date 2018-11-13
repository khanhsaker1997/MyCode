#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("CASO.inp","r",stdin);
//	freopen("CASO.out","w",stdout);
	int n; cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	long long l=1,sl = 0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==a[i-1]) l++;
		else
		{
			sl += l*(l-1) / 2;
			l=1;
		}
		if(i==n) sl += l*(l-1) / 2;
	}
	cout << sl;
	return 0;
}