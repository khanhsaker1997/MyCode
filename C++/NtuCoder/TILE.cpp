#include <bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("TILE.inp","r",stdin);
//	freopen("TILE.out","w",stdout);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a+0,a+n);
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] >= dem) dem++;
	}
	cout << dem;
	return 0;
}