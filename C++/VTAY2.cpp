#include <bits/stdc++.h>
using namespace std;

string doi(string s,int a)
{
	int n = s.size();
	string s1 = s;
	for(int i=0;i<=n-a-1;i++)
		s1[i] = s[a+i];
	for(int i=n-a;i<n;i++)
		s1[i] = s[i-n+a];
	return s1;
}

int main()
{
//	freopen("VTAY2.inp","r",stdin);
//	freopen("VTAY2.out","w",stdout);
	string s;
	cin >> s;
	int n = s.size();
	string minn = s;
	for(int i=0;i<n;i++)
		if(doi(s,i) < minn)
			minn = doi(s,i);
	for(int i=0;i<n;i++)
		if(doi(s,i).compare(minn) == 0)
		{
			cout << doi(s,i);
			return 0;
		}
	return 0;
}