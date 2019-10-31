#include <iostream>
#include <list>
#include <set>

int main1()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	std::list<char> coll;

	for (char c = 'a'; c <= 'z'; ++c)
	{
		coll.push_back(c);
	}
	
	std::list<char>::const_iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << *pos << ' ';
	}
	cout << '\n' << endl;

	cout << "一共有" << coll.size() << "个元素" << endl;
	getchar();

	return 0;
}

int main()
{
	typedef std::set<int> intset; 

	intset coll;
	int i = 0;
	for (i = 10; i > 0; i--)
	{
		coll.insert(i);
	}
	intset::const_iterator pos;
	for (pos = coll.begin(); pos != coll.end(); pos++)
	{
		std::cout << *pos << std::endl;
	}

	return 0;
}