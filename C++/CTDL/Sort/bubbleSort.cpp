#include <bits/stdc++.h>
using namespace std;
#define n 20
int a[n];

void bubbleSort(int a[])
{
	for(int i=0;i<n;i++)
		for(int j=n-1;j>i;j--)
			{
				if(a[i]>a[j])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
}

int main()
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
		a[i] = rand() % 100;
	bubbleSort(a);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	return 0;
}
