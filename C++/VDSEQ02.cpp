#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("VDSEQ02.inp","r",stdin);
//	freopen("VDSEQ02.out","w",stdout);
	long long n,k;
	cin >> n >> k;
	long long a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	long long s[n];
	s[0] = a[0];
	for(long long i=1;i<n;i++)
		s[i] = s[i-1] + a[i];
	for(long long i=0;i<n;i++)
		{
			s[i] = s[i] % k;
		//	cout << s[i] << endl;
		}

	long long ans = 0;
	long long be[n],lon[n];
	for(long long i=0;i<n;i++)
		{
			lon[s[i]] = i;
		}
	for(long long i=n-1;i>=0;i--)
		{
			be[s[i]] = i;	
		}
	for(long long i=0;i<n;i++)
	{
		if(s[i] == 0) ans = max(ans,i+1);
		ans = max(lon[s[i]] - be[s[i]],ans);
	}
	cout << ans;
	return 0;
}