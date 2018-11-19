#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int item; // kieu cac phan tu dinh nghia la item
struct Node // xay dung mot Node trong danh sach
{
	item Data; // du lieu co kieu item
	Node *next; // truong next la con tro, tro den 1 node tiep theo	
};
typedef Node *List; // List la mot danh sach cac Node

void Init (List &L) // &L la dia chi cua danh sach ngay khi truyen ham
{
	L = NULL; // Cho L tro den NULL
}

int Isempty(List L)
{
	return (L == NULL);
}

int len(List L)
{
	Node *P = L; // teo 1 Node P de duyet danh sach L
	int i = 0; //  bien dem
	while (P!=NULL) // trong khi P chua tro den NULL
	{
		i++;
		P= P->next;
	}
	return i;
}

Node *Make_Node(Node *P, item x) // tao 1 node p chua thong tin x
{
	P = (Node *)malloc(sizeof(Node)); // Cap phat vung nho cho P
	P->next = NULL; // Cho truong Next tro den NULL
	P->Data = x; // ghi du lieu vao data
	return P;
}

void Insert_First(List &L, item x)
{
	Node *P;
	P = Make_Node(P,x); // teo 1 Node P
	P->next = L; // Cho P tro den L
	L = P; // L tro ve P
}

void Insert_k (List &L, item x, int k) 
{
	Node *P, *Q = L;
	int i = 1;
	if(k < 1 || k > len(L) + 1)
		cout << "Vi tri chen khong hop le";
	else
	{
		P = Make_Node(P,x);
		if(k == 1) Insert_First(L,x); // chen vao vi tri dau tien
		else // chen vao k != 1
		{
			while(Q != NULL && i!= k-1)
			{
				i++;
				Q = Q->next;
			}
			P->next = Q->next;
			Q->next = P;
		}
	}
}

int Search(List L, item x)
{
	Node *P = L;
	int i = 1;
	while(P != NULL && P->Data != x)
	{
		P = P->next;
		i++;
	}
	if(P!=NULL) return i; // tra ve vi tri tim thay
	else return 0; // khong tim thay
}

void Del_First(List &L, item &x)
{
	x = L->Data; // Lay gia tri ra neu can dung;
	L = L->next; // Cho L tro den NOde thu 2 trong ds
}

void Del_k(List &L, item &x, int k)
{
	Node *P = L;
	int i = 1;
	if(k<1 || k>len(L))
		cout << "Vi tri xoa khong hop le";
	else
	{
		if(k==1) Del_First(L,x); // xoa vi tri dau tien
		else // xoa vi tri k != 1
		{
			while(P!=NULL && i != k-1)
			{
				P=P->next;
				i++;
			}
			P->next = P->next->next;
		}
	}
}

void Del_x (List &L, item x) // xoa phan tu x trong danh sach
{
	while(Search (L,x)) // trong khi van tim thay x thi van xoa
		Del_k(L,x,Search(L,x));
}

int main()
{
	List L;
	Init(L);
	for(int i=10;i>0;i--)
		Insert_First(L,i);
	Node *P = L;
	while(P != NULL)
	{
		cout << P->Data << " ";
		P = P->next;
	}
	cout << endl;
	return 0;
}
