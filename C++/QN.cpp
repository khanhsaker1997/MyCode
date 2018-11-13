#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("HISO.inp","r",stdin);
//	freopen("HISO.out","w",stdout);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a+0,a+n);
	int i = 0;
	while(1)
	{
		if(binary_search(a+0,a+n,i*i)) i++;
		else
			{
				cout << i*i; return 0;
			}
	}
	return 0;
}