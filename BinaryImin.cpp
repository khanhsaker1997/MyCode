#include<bits/stdc++.h>
//problem: tim i min thoa man a[i] >=x;
using namespace std;
int a[100];
int binaryS(int l,int r,int x)
{
	int ans = r;
	while(l<r)
	{
		int k = (l+r) / 2;
		if(a[k] < x) l = k+1;
		else
		{
			ans = min(ans,k);
			r = k-1;
		}
	}
	return ans;
}
//hoac dung ham i = lower_bound(a+1,a+n+1,x) - a
// i = upper_bound(a+1,a+n+1,x) - a  == tim i min thoa man x[i] > x;
int main()
{
	for(int i=0;i<10;i++)
		a[i] = i;
	a[5]=4;
	a[6] = 4;
	a[7] = 4;
	cout << binaryS(0,9,4);
	return 0;
}
