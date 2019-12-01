#include <iostream>
#include <string>

int main()
{
	std::string b = "Àî±¦·¢";
	b.append("LOVE¹ùÓî½£");
	std::string a;
	a.assign(b, 6, 10);
	std::string space(a.size(), ' ');
	std::string second = '*' + space + '*';
	std::string first(second.size(), '*');

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout <<"*"<<a<<"*"<< std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	char c = b.at(7);
	std::cout << b.c_str()<<std::endl;


	return 0;
}