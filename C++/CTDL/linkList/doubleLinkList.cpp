#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int item;

typedef struct Node // cau truc 1 Node
{
	item Data;
	Node *Left;
	Node *Right;
};

typedef struct Dlist // cau truc cua list
{
	Node *Head; // con tro dau
	Node *Tail; //  con tro cuoi
};

void Init(Dlist &L)
{
	L.Head = NULL;
	L.Tail = NULL;
}
int Isempty(Dlist L)
{
	return (L.Head == NULL);
}

int Len(Dlist L) // do dai danh sach
{
	Node *PH = L.Head, *PT = L.Tail; // tao Node PH
	int i = 0; // bien dem;
	if(PH != NULL) i =1;
	while(PH != NULL) // trong khi PH chua tro den NULL
	{
		if(PH == PT) break;
		PH = PH->Right; // cho PH tro den Node tiep theo
		i++;
		if(PH == PT) break;
		PT = PT->Left;
		i++;
	}
	return i;
}

Node *Make_Node(item x)
{
	Node *P = (Node *) malloc(sizeof(Node));
	P->Data = x;
	P->Left = NULL;
	P->Right  = NULL;
	return P;
}

void Insert_First (Dlist &L,item x)
{
	Node *P;
	P = Make_Node(x);
	if(Isempty(L))
	{
		L.Head = P;
		L.Tail = P;
	}
	else
	{
		P->Right = L.Head;
		L.Head->Left = P;
		L.Head = P;
	}
}

void Insert_Last (Dlist &L, item x)
{
	Node *P;
	P = Make_Node(x);
	if(Isempty(L))
	{
		L.Head = P;
		L.Tail = P;
	}
	else
	{
		L.Tail->Right = P; // ket noi voi danh sach
		P->Left = L.Tail; // P tro ve Node truoc
		L.Tail = P; // Luu lai vi tri cuoi
	}
}

void Insert_k (Dlist &L, item x, int k)
{
	Node *PH = L.Head,*PT,*R;
	int i = 1, l = Len(L);
	if(k<1 || k > l+1)
	cout << "Vi tri chen khong hop le !";
	else
	{
		R = Make_Node(x);
		if(k==1) Insert_First(L,x); // chen vao vi tri dau
		else
			if(k == l+1) Insert_Last(L,x); // tren vao vi tri cuoi
			else
			{
				while(PH != NULL && i != k-1) // duyet den vi tri k-1
				{
					i++;
					PH = PH->Right;
				}
				PT = PH->Right; // xac dinh vi tri k
				R->Right = PT;
				R->Left = PH;
				PH->Right = R;
				PT->Left = R;
			}
	}
}

void Del_First(Dlist &L, item &x)
{
	if(!Isempty(L))
	{
		x = L.Head->Data; // lay gia tri ra neu can dung;
		L.Head = L.Head->Right;
	}
}

void Del_Last(Dlist &L, item &x)
{
	if(!Isempty(L))
	{
		x=L.Tail->Data;
		L.Tail = L.Tail->Left;
		L.Tail->Right = NULL;
	}
}

void Del_k(Dlist &L,item &x, int k)
{
	Node *PH = L.Head, *PT;
	int i = 1, l = Len(L);
	if(k<1 || k >l)
	cout << "Vi tri xoa khong hop le !";
	else
	{
		if(k == 1) Del_First(L,x);
		else
			if(k==1) Del_Last(L,x);
			else
			{
				while(PH != NULL && i != k-1)
				{
					i++;
					PH = PH->Right;
				}
				x = PH->Right->Data;
				PT = PH->Right->Right;
				PH->Right = PT;
				PT->Left = PH;
			}
	}
}

int Search(Dlist L, item x)
{
	Node *P = L.Head;
	int i = 1;
	while(P != NULL && P->Data != x)
	{
		P = P->Right;
		i++;
	}
	if(P != NULL) return i; // tra ve vi tri tim thay
	else return 0; // k tim thay
}

void Del_x(Dlist &L, item x)
{
	int l = Search(L,x); // xoa phan tu x trong danh sach
	while(l)
	{
		Del_k(L,x,l); // trong khi van tim thay x thi van xoa
		l = Search(L,x);
	}
}
int main()
{
	Dlist L;
	Init(L);
	for(int i=1;i<11;i++)
		Insert_Last(L,i);
	int f,l;
	Del_First(L,f);
	Del_Last(L,l);
	Node *P  = L.Head;
	cout << f << " ";
	while(P != NULL)
		cout << P->Data << " ",
		P = P->Right;
	cout << l;
	return 0;
}

