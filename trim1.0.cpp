#include <iostream>
#include <string>


void trim(std::string & s, std::string sep)
{
	if (s.empty())
		return;

	size_t pos = s.find_first_of(sep);
	while (pos != std::string::npos)
	{
		s.erase(pos, 1);
		pos = s.find_first_of(sep);
	}
}

void test_trim()
{
	std::string str = "It's my conviction that the dream ,to be a programer and my programming will change all over the world, will come ture for decades ";
	trim(str, "p");
	std::cout << str << std::endl;
	std::cout << "========================"<< std::endl;
	trim(str, "c");
	std::cout << str << std::endl;
	std::cout << "========================"<< std::endl;

	str = "Brazil,Russia,India,China,South Africa";
	trim(str, ",");
	std::cout << str << std::endl;

}

int main()
{
	test_trim();
	system("pause");
    return 0;
}
