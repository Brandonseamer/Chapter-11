//Author: Brandon Seamer
//Date: April 26, 2018
//Program: Adding Arrays
#include<iostream>
#include<iomanip>
#include<string>

void displayArray(double dollars[], int numElements)
{
	double total = 0;
	std::cout << std::fixed << std::setprecision(2) << "\n" << std::endl;
	for (int sub = 0; sub < 4; sub++)
	{
		std::cout << "Sales for Region " << sub + 1 << ": $";
		std::cout << dollars[sub] << std::endl;
		total = total + dollars[sub];
		std::cout << "Your total is: " << total << std::endl;
	}
}
int main()
{
	std::string userContinue;
	double sales[4] = { 0.0 };
	double total = 0.0;

	
	do{
		for (int sub = 0; sub < 4; sub++)
		{
			std::cout << "Enter Sales for Region ";
			std::cout << sub + 1 << ": \n";
			std::cin >> sales[sub];
		}
		displayArray(sales, 4);

		std::cout << "Would you like to total anything else? ('Yes' or 'No')" << std::endl;
		std::cin >> userContinue;
	} while (userContinue == "Yes");

	system("pause");
	return 0;
}
