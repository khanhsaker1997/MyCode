#include<bits/stdc++.h>
using namespace std;
bool ss(int x,int y)
{
	return x>y;
}
int main()
{
	int a[] = {1,2,54,324,56,3,3,34,234};
	for(int i=0;i<9;i++)
	cout << a[i] << " ";
	cout << endl;
	sort(a,a+9,ss);
	for(int i=0;i<9;i++)
	cout << a[i] << " ";
	return 0;
}
