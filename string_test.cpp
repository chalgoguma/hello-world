#include "stdafx.h"

#include <iostream>  
#include <sstream>

bool isRightsideGE(const std::string& left, const std::string& right)
{
	std::stringstream lvsstr(left);
	std::stringstream rvsstr(right);

	int leftVer = 0, rightVer = 0;
	
	bool existVer = true;
	while (existVer)
	{
		int leftVer = 0, rightVer = 0;
		existVer = false;

		if (lvsstr >> leftVer)
		{
			if (lvsstr.peek() == '.')
				lvsstr.ignore();

			existVer = true;
		}

		if (rvsstr >> rightVer)
		{
			if (rvsstr.peek() == '.')
				rvsstr.ignore();

			existVer = true;
		}

		if (!existVer)
			break;

		if (leftVer != rightVer)
			return leftVer < rightVer;
	}

	return true;
}

int main()
{
	std::string ver1 = "1.0.0";
	
	isRightsideGE(ver1, ver2);

	// stringstream test...
	int intNum = 0;
	double doubleNum = 0;

	std::stringstream stream1;
	//std::string testString1 = "25 1 3 .235\n1111\n222222";	
	std::string testString1 = "25,1.3 .235<76>\n1111\n222222";

	stream1.str(testString1);

	while (stream1 >> intNum)
	{
		while (stream1.peek() == '.' || stream1.peek() == ' ' || stream1.peek() == ',' || stream1.peek() == '<' || stream1.peek() == '>')
			stream1.ignore();

		std::cout << "num: " << intNum << std::endl;
	}

}
