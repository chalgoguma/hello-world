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
	stream1.str(testString1);

	while (stream1 >> intNum)
	{
		while (stream1.peek() == '.' || stream1.peek() == ' ' || stream1.peek() == ',' || stream1.peek() == '<' || stream1.peek() == '>')
			stream1.ignore();

		std::cout << "num: " << intNum << std::endl;
	}

}
