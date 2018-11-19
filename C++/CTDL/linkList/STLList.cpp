#include <iostream>
#include <list>
using namespace std;
int main()
{
	int a[] = {1,2,3,4};
	list <int> list1(a+1,a+3);
	list <int> list2(4,50);
	cout << list2.size();
	list2.push_back(51);
	for(list <int>::iterator b = list2.begin();b != list2.end();b++)
		cout << *b << " ";
	return 0;
}
