#include <bits/stdc++.h>
using namespace std;

long long b[999999] = {0};

void sangnt()
{

	for(long long i=2;i<=999999;i++)
	{
		if(b[i]==0)
		{
			for(long long j=i*i;j<=999999;j+=i)
				b[j] = i;
			b[i] = i;
		}
	}
}

string ktra(long long a)
{
	long long tong=a;
	while(a>1)
	{
		long long u = b[a];
		while(a % u == 0)
		{
			a /= u;
		}
		tong = tong*(u-1)/u;
	}
	if(b[tong]==tong) return "TRUE";
		else return "FALSE";
	//return tong;
}
int main()
{
	freopen("NGTO5.inp","r",stdin);
	freopen("NGTO5.out","w",stdout);
	long long t; cin >> t;
	long long a;
	sangnt();
	for(long long i=0;i<t;i++)
	{
		cin >> a;
		cout << ktra(a) << endl;
	}
	return 0;
}