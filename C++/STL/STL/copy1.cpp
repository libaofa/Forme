#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int>coll1;
	vector<int>coll2;

	for (int i = 0; i < 10; i++)
	{
		coll1.push_back(i);
	}
	coll2.resize(coll1.size());

	copy(coll1.begin(), coll1.end(),
		coll2.begin());
	vector<int>::iterator it;
	for (it = coll2.begin(); it != coll2.end(); ++it)
	{
		cout << *it << '\t';
	}

	return 0;
}