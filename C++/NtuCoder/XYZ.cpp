#include <bits/stdc++.h>
using namespace std;

long long change(string a)
{
	long long tong = 0;
	tong += ((a[0]-'0')*10 + a[1] - '0')*3600;
	tong += ((a[2]-'0')*10 + a[3] - '0')*60;
	tong += (a[4]-'0')*10 + a[5] - '0';
	return tong;
}

int main()
{
//	freopen("XYZ.inp","r",stdin);
//	freopen("SVOI.out","w",stdout);
	long long n; cin >> n;
	map<long long ,long long> a;
	long long so1[n],so2[n];
	string time1,time2;
	long long tg;
	for(long long i=0;i<n;i++)
	{
		cin >> so1[i] >> so2[i] >> time1 >> time2;
		if(change(time2) >= change(time1))
		tg = change(time2) - change(time1);
		else
		tg = 24*60*60 - change(time1) + change(time2);
		a[so1[i]] += tg*2;
		a[so2[i]] += tg;
	}
	long long maxx = -1;
	for(long long i=0;i<n;i++)
	{
		cout << a[so1[i]]<<' ' << a[so2[i]] << endl;
		maxx = max(maxx,a[so1[i]]);
		maxx = max(maxx,a[so2[i]]);
	}
	cout << maxx;
	return 0;
}