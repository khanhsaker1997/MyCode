#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("SVOI.inp","r",stdin);
	freopen("SVOI.out","w",stdout);
	int n,t,p;
	cin >> n >> t >> p;
	int a[n][4],b[n] = {0};
	for(int i=0;i<n;i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
	}
	int dem = 0;
	while(1)
	{
		int co = 0;
		for(int i=0;i<n;i++)
		{
			if(b[i]==0 && t >= a[i][0] && p >= a[i][1] )
			{
				b[i] = 1;
				t += a[i][2];
				p += a[i][3];
				co = 1;
				dem ++;
			}
		}
		if(co == 0) break;
	}
	cout << dem;
	return 0;
}