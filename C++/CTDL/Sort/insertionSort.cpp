#include <bits/stdc++.h>
using namespace std;
#define n 20
int a[n];
void insertionSort(int a[])
{
	for(int i=0;i<n;i++)
	{
		// tim vi tri phu hop cho i
		int j = i;
		while(j>0 && a[i] < a[j-1]) j--;
		// dua i ve dung vi tri
		int temp = a[i];
		for(int k = i;k>j;k--)
			a[k] = a[k-1];
		a[j] = temp;
	}
}
int main()
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
		a[i] = rand() % 100;
	insertionSort(a);
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	return 0;
}
