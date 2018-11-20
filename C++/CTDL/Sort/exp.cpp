#include <bits/stdc++.h>
using namespace std;
#define MAXN 20
int a[MAXN]; // m?ng trung gian cho vi?c s?p x?p

// S?p x?p c�c ph?n t? c� ch? s? t? left d?n right c?a m?ng data.
void mergeSort(int data[MAXN], int left, int right) {
//	if (data.length == 1) {
//		// D�y ch? g?m 1 ph?n t?, ta kh�ng c?n s?p x?p.
//		return ;
//	}
	int mid = (left + right) / 2;
	// S?p x?p 2 ph?n
	mergeSort(data, left, mid);
	mergeSort(data, mid+1, right);

	// Tr?n 2 ph?n d� s?p x?p l?i
	int i = left, j = mid + 1; // ph?n t? dang x�t c?a m?i n?a
	int cur = 0; // ch? s? tr�n m?ng a

	while (i <= mid || j <= right) { // ch?ng n�o c�n 1 ph?n chua h?t ph?n t?.
		if (i > mid) {
			// b�n tr�i kh�ng c�n ph?n t? n�o
			a[cur++] = data[j++];
		} else if (j > right) {
			// b�n ph?i kh�ng c�n ph?n t? n�o
			a[cur++] = data[i++];
		} else if (data[i] < data[j]) {
			// ph?n t? b�n tr�i nh? hon
			a[cur++] = data[i++];
		} else {
			a[cur++] = data[j++];
		}
	}

	// copy m?ng a v? m?ng data
	for (int i = 0; i < cur; i++)
		data[left + i] = a[i];
}
int main()
{
	srand(time(NULL));
	for(int i=0;i<20;i++)
		a[i] = rand() % 100;
	mergeSort(a,0,19);
	for(int i=0;i<20;i++)
		cout << a[i] << " ";
	return 0;
}
