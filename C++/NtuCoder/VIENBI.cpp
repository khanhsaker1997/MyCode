#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("VIENBI.inp","r",stdin);
//	freopen("VIENBI.out","w",stdout);
	int a,b,c;
	cin >> a >> b >> c;
	if((a+b)*(a+c)==0 || (b-c)%3 != 0) cout << "NO";
		else cout << "YES";
	return 0;
}