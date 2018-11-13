#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("CQUA.inp","r",stdin);
//	freopen("CQUA.out","w",stdout);
	int n;
	cin >> n;
	int m;
	int chan=0,le=0;
	for(int i=0;i<n;i++)
		{
			cin >> m;
			if(m==100) le++;
			else chan++;
		}
	if(le % 2 ==1)
		{
			cout << "NO";
			return 0;
		}
	if(le==0 && chan % 2==1)
	{
		cout << "NO";
		return 0;
	}
	cout << "YES";
	return 0;
}