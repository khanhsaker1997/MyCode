#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("DASO.inp","r",stdin);
//	freopen("DASO.out","w",stdout);
	long long n;
	cin >> n;
	long long a[n];
	cin >> a[0] >> a[1];
	//cout << a[0]<<" "<< a[1]<<" ";
	long long max1=2;
	long long dem = 2;
	for(long long i=2;i<n;i++)
	{
		cin >> a[i];
		//cout << a[i] <<' ';
		if(a[i] == (a[i-1] + a[i-2])) dem++;
		else
		{
			max1 = max(max1,dem);
			dem = 2;
		}
	}
	max1=max(max1,dem);
	if(max1 >2)
	cout << max1;
	else 
	cout << -1;
	return 0;
}