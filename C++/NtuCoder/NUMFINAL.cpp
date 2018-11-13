#include <bits/stdc++.h>
using namespace std;

long long power(long long a,long long n)
{
	if(n==0) return 1;
	else
	{
		long long temp = power(a,n/2);
		if(n%2==0)
			return temp * temp %10;
		else return temp * temp *a %10;
	}
}

int main()
{
//	freopen("NUMFINAL.inp","r",stdin);
//	freopen("NUMFINAL.out","w",stdout);
	long long a,n;
	cin >> a >> n;
	cout << power(a,n);
	return 0;
}