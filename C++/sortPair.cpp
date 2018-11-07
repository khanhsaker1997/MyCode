#include<bits/stdc++.h>
using namespace std;
bool ss(pair<int,int> x,pair <int,int> y)
{
	return x.second,x.first < y.second,y.first;
}
int main()
{
	pair <int,int> a[10];
	for(int i=0;i<10;i++)
		{
			a[i].first = i;
			a[i].second = -5;
		}
	for(int i=0;i<10;i++)
	cout << a[i].first << " " << a[i].second << endl;
	cout << endl;
	sort(a,a+10,ss);
	for(int i=0;i<10;i++)
	cout << a[i].first << " " << a[i].second << endl;
	return 0;
}
