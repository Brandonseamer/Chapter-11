//Intermediate26.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	//declare array
	double prices[10] = {10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78};
	//declare variable
	double increase = 0.0;
	
	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	
	for (int x = 0; x < 10; x++)
	{
		prices[x] = prices[x] * (1 + increase/100);
	}

	//end for
	
	//display contents of array
	for (int x = 0; x < 10; x++)
	{
		cout << "Price for " << x << " is " << prices[x] << std::endl;
	}
	//end for

	system("pause");
	return 0;
}	//end of main function