#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> a;
	for(int i=1;i<=10;i++)
	a.push_back(i);
//	for(int i=0;i<10;i++)
//		cout << a.at(i) << " ";
	a.erase(a.begin()+2,a.begin()+4);
	cout << a.front() << " " << a.back() << " " << a.size();
	return 0;
}
