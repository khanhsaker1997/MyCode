#include <bits/stdc++.h>
using namespace std;
int a[1001][1001] = {0};


int loang(int n,int m,int x,int y)
{
	int dx[] = {1,1,2,2,-1,-1,-2,-2};
	int dy[] = {2,-2,1,-1,2,-2,1,-1};
	for(int i=0;i<8;i++)
	{
		if((x+dx[i]) >=1 && (x+dx[i]) <=n && (y+dy[i]) >=1 && (y+dy[i]) <=m)
			if(a[x+dx[i]][y+dy[i]] == 0)
			{
				a[x+dx[i]][y+dy[i]] = a[x][y] + 1;
			}
	}
}


int main()
{
	freopen("QUANMA.inp","r",stdin);
//	freopen("QUANMA.out","w",stdout);
	int n,m,x1,y1,x2,y2;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
	a[x1][y1] = 1;
	loang(n,m,x1,y1);
	int dem = 2;
	while(a[x2][y2] == 0)
	{
		int co = 0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(a[i][j] == dem) 
					{
						loang(n,m,i,j);
						co=1;
					}
			}
		if(co==0) break;
		dem++;
	}
	cout << a[x2][y2] - 1;
	return 0;
}