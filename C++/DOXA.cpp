#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	int n;
	cin >> n;
	int a[n];
	int x[n+1];
	for(int i=1;i<n;i++)
		cin >> a[i];
	for(int i=1;i<=n;i++)
		cin >> x[i];
	//int min1=x[1];
	long long tong = x[1] * a[1];
	for(int i=2;i<n;i++)
	{
		x[i] = min(x[i],x[i-1]);
		tong  += x[i]*a[i];
	}
	cout << tong;
	return 0;
}