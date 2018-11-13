#include <bits/stdc++.h>
using namespace std;
char s[1000];
int dx[1000] = {0};
char s1[1000];
void inhv()
{
	for(int i=0;i<strlen(s);i++)
		cout << setw(3) << s1[i];
	cout << endl;
}

void hoanvi(int i)
{
	if(i >= strlen(s)) inhv();
	for(int v=0;v<strlen(s);v++)
	{
		if(dx[v] ==0)
		{
			dx[v] = 1;
			s1[i] = s[v];
			hoanvi(i+1);
			dx[v] = 0;
		}
	}

}

int main()
{
	cin >> s;
	hoanvi(0);
	return 0;
}