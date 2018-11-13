#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int b[n];
	b[0] = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<b[i-1]) b[i]=a[i];
		else b[i] = b[i-1];
	}
	// for(int i=0;i<n;i++)
	// 	cout << b[i] <<" ";
	int max1 = 0;
	int temp;
	for(int i=n-1;i>0;i--)
	{
		max1 = max(max1,a[i]-b[i-1]);
	}
	cout << max1;
	return 0;
}