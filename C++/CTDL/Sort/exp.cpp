#include <bits/stdc++.h>
using namespace std;
#define MAXN 20
int a[MAXN]; // m?ng trung gian cho vi?c s?p x?p

// S?p x?p các ph?n t? có ch? s? t? left d?n right c?a m?ng data.
void mergeSort(int data[MAXN], int left, int right) {
//	if (data.length == 1) {
//		// Dãy ch? g?m 1 ph?n t?, ta không c?n s?p x?p.
//		return ;
//	}
	int mid = (left + right) / 2;
	// S?p x?p 2 ph?n
	mergeSort(data, left, mid);
	mergeSort(data, mid+1, right);

	// Tr?n 2 ph?n dã s?p x?p l?i
	int i = left, j = mid + 1; // ph?n t? dang xét c?a m?i n?a
	int cur = 0; // ch? s? trên m?ng a

	while (i <= mid || j <= right) { // ch?ng nào còn 1 ph?n chua h?t ph?n t?.
		if (i > mid) {
			// bên trái không còn ph?n t? nào
			a[cur++] = data[j++];
		} else if (j > right) {
			// bên ph?i không còn ph?n t? nào
			a[cur++] = data[i++];
		} else if (data[i] < data[j]) {
			// ph?n t? bên trái nh? hon
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
