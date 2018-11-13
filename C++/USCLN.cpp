#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}

int main()
{
//	freopen("USCLN.inp","r",stdin);
//	freopen("USCLN.out","w",stdout);
	long long a,b;
	cin >> a >> b;
	cout << gcd(a,b);
	return 0;
}