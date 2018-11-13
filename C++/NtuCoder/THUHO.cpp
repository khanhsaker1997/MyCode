#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("THUHO.inp","r",stdin);
//	freopen("THUHO.out","w",stdout);
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int tong = min (a[0],m);
	int lay = min(a[0],m);
	int conlai = a[0] - lay;
	a[n] = 0;
	for(int i=1;i<=n;i++)
	{
		tong += min(conlai+a[i],m);
		lay = min(conlai+a[i],m);
		//conlai = a[i] + conlai - lay;
		conlai = min(a[i]+conlai - lay,a[i]);
	}
	cout << tong;
	return 0;
}