#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("SMAMA.inp","r",stdin);
	freopen("SMAMA.out","w",stdout);
	long long k; cin >> k;
	string ans = "";
	while(k>0)
	{
		if(k%2 == 0)
		{
			ans = '7' + ans;
			k = (k-2)/2;
		}
		else
		{
			ans = '4' + ans;
			k = (k-1)/2;
		}
	}
	cout << ans;
	return 0;
}