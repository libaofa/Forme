#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll1;
	list<int> coll2;
	list<int> coll3;
	list<int> coll4;
	for (int i = 0; i < 10; i++)
	{
		coll1.push_back(i);
	}

	copy(coll1.begin(), coll1.end(),
		back_inserter(coll2));

	copy(coll1.begin(), coll1.end(),
		front_inserter(coll3));

	copy(coll1.begin(), coll1.end(),
		inserter(coll4, coll4.begin()));

	list<int>::iterator it;
	for (it = coll2.begin(); it != coll2.end(); ++it)
	{
		cout << *it << '\t';
	}
	cout << endl;

	for (it = coll3.begin(); it != coll3.end(); ++it)
	{
		cout << *it << '\t';
	}
	cout << endl;

	for (it = coll4.begin(); it != coll4.end(); ++it)
	{
		cout << *it << '\t';
	}
	cout << endl;


	return 0;
}