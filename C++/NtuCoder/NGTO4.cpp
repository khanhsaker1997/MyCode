#include <bits/stdc++.h>
using namespace std;
int a[1000001] = {0};
int main()
{
//	freopen("NGTO4.inp","r",stdin);
//	freopen("NGTO4.out","w",stdout);
	int t; cin >> t;
	a[0]=-1;a[1]=-1;a[2]=1;a[3]=1;a[4]=2;a[5]=1;a[6]=2;a[7]=1;a[8]=2;
	for(int i=9;i<1000001;i++)
	{
		a[i] = 1+min(min(a[i-2],a[i-3]),min(a[i-5],a[i-7]));
	}

	int b;
	for(int i=0;i<t;i++)
	{
		cin >> b;
		cout << a[b] << endl;
	}
	return 0;
}