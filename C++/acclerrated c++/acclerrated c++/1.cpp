#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string greet;
	cout << "������һ�λ�:";
	rewind(stdin);
	cin >> greet;
	fflush(stdout);
	const int pad = 1;
	const int rows = pad * 2 + 3;
	string::size_type cols = greet.size() + pad * 2 + 2;

	for (int r = 0; r != rows; r++)	//r������
	{
		string::size_type c = 0;
		while (c != cols)			//c������
		{
			if (r == pad + 1 && c == pad + 1)
			{
				cout << greet;
				fflush(stdout);
				c += greet.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
				{
					cout << "*";
					fflush(stdout);
				}
				else
				{
					cout << " ";
					fflush(stdout);
				}
				c++;
			}
		}
		putchar('\n');
	}

	return 0;
}