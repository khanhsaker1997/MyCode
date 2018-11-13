#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n,t;
	cin >> m >> n >> t;
	long long tong;
	tong  = n/(m+1)*m*t + n%(m+1)*t;
	cout << tong;
}