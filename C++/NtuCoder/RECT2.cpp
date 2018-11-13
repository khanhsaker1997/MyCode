#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int a = pow(x1 -x2,2) + pow(y1- y2,2);
	int b = pow(x2 -x3,2) + pow(y2- y3,2);
	int c = pow(x1 -x3,2) + pow(y1- y3,2);
	int max1 = max(max(a,b),c);
	if(max1 == a)
	{
		x4 = x1 + x2 - x3;
		y4 = y1 + y2 - y3;
		cout << x4 << ' ' << y4;
	}
	if(max1 == b)
	{
		x4 = x2 + x3 - x1;
		y4 = y2 + y3 - y1;
		cout << x4 << ' ' << y4;
	}
	if(max1 == c)
	{
		x4 = x1 + x3 - x2;
		y4 = y1 + y3 - y2;
		cout << x4 << ' ' << y4;
	}
	return 0;
}