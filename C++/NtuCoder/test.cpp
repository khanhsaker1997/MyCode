#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> a[100000000];
int change(string a)
{
	int tong = 0;
	tong += ((a[0]-'0')*10 + a[1] - '0')*3600;
	tong += ((a[2]-'0')*10 + a[3] - '0')*60;
	tong += (a[4]-'0')*10 + a[5] - '0';
	return tong;
}
int checkdx(int n)
{
	int tong = 0;
	int n1 = n;
	while(n > 0)
	{
		tong = tong*10 + n%10;
		n /= 10;
	}
	if(tong == n1) return 1;
	else return 0;
}

int main()
{
	long long a[] = {0,1,2,3,4,5,6,7,8,9,10,11};
	cout << upper_bound(a+1,a+9,8) - a;
	// for(long long i=0;i<9;i++)
	// 	cout << a[i] << " ";
	return 0;
}