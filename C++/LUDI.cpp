#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("LUDI.inp","r",stdin);
//	freopen("LUDI.out","w",stdout);
	long long n;
	cin >> n;
	pair <long long,long long> a[n+1];
	// giong bai day con tang dai nhat
	// thay dieu kien la a[i].first >= a[i-1].second;
	for(long long i=1;i<=n;i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a+1,a+n+1);
	long long b[n+1] = {0};
	long long ans = 0;
	for(long long i=1;i<=n;i++)
	{
		b[i] = 1;
		for(long long j=1;j<i;j++)
		{
			if(a[j].second < a[i].first && b[i] < b[j] + 1)
				b[i] = b[j] + 1;
		}
		ans = max(ans,b[i]);
	}
	cout << ans;
	return 0;
}