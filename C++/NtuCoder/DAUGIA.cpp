#include <bits/stdc++.h>
using namespace std;

long long n[1000001] = {0};

void sangnt()
{
	for(long long i=2;i<=1000000;i++)
	{
		if(n[i] == 0)
		{
			for(long long j=i*i;j<=1000000;j+=i)
				n[j] = i;
			n[i] = i;
		}
	}
}

long long checkdx(long long n)
{
	long long tong = 0;
	long long n1 = n;
	while(n > 0)
	{
		tong = tong*10 + n%10;
		n /= 10;
	}
	if(tong == n1) return 1;
	else return 0;
}

int main()
{
	freopen("DAUGIA.inp","r",stdin);
	freopen("DAUGIA.out","w",stdout);
	/*
		map<ll,ll> dem;
		for(map<long long,long long>::iterator i=dem.begin();i!=dem.end();i++)
		{
			x = i -> first;
			y = i -> second;
		}
	*/
	long long a,b;
	cin >> a >> b;
	sangnt();
	long long dem = 0;
	for(long long i=a;i<=b;i++)
	{
		if(n[i] == i && checkdx(i) == 1) dem++;
	}
	cout << dem;
	return 0;
}