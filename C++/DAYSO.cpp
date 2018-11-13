#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("DAYSO.inp","r",stdin);
	freopen("DAYSO.out","w",stdout);
	long long n;
	cin >> n;
	long long a[n];
	for(long long i=0;i<n;i++)
		cin >> a[i];
	long long b[n] = {0};
	b[0] = a[0];
	for(long long i=1;i<n;i++)
	{
		b[i] = a[i] +b[i-1];
	}
	long long j=1;
	long long maxx = b[2];
	b[-1] = 0;
	for(long long i=0;i<n;i++)
	{
		while(i + j*3+1<=n)
		{
			for(long long k=i;k<n-j*3+1;k++)
			{
				maxx = max(maxx,b[k+j*3-1] - b[k-1]);
				//if(maxx==3) cout << k+j*3-1 << ' '<< k-1 << endl;
			}
			j++;
		}
		//j--;
		maxx = max(maxx,b[n-1] - b[n-j*3-1]);
		j=1;
	}
	cout << maxx;
	return 0;
}