#include <bits/stdc++.h>
#define n 1000000007
using namespace std;
int main()
{
	freopen("TITO2.inp","r",stdin);
//	freopen("TITO2.out","w",stdout);
	double a,b;
	cin >> a >> b;
	long long c = a,d = b;
	if (a - (int)a != 0) c = c+1;
	c = c -1;
	long long tong;
	if((2*d+1) % 3 ==0)
	tong = (d*(d+1)/2 % n)*((2*d+1)/3%n);
	else
	tong = (d*(d+1)/6 % n)*((2*d+1)%n);
	if((2*c+1) % 3==0)
	tong -= (c*(c+1)/2 % n)*((2*c+1)/3%n);
	else
	tong -= (c*(c+1)/6 % n)*((2*c+1)%n);
	cout << tong % n;
	return 0;
}