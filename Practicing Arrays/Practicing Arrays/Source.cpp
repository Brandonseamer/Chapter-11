//Author: Brandon Seamer
//Program: Practicing Arrays
//Date: April 26, 2018

#include <iostream>

int main()
{
	int foo[] = { 16, 2, 77, 40, 12071 };
	int n, result = 0;

	for (n = 0; n < 5; n++)
	{
		result = result + foo[n];
		
	}
	std::cout << result << ". \n";
	system("pause");
	return 0;

}