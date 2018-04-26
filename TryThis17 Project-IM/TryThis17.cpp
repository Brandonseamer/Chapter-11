//TryThis17.cpp
//displays the contents of an array
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void displayArray(double dollars[], int numElements);

int main()
{
	//declare array
	double sales[4] = {0.0};

	//store data in the array
	int sub = 0;
	while (sub < 4)
	{
		cout << "Enter the sales for Region ";
		cout << sub + 1 << ": ";
		cin >> sales[sub];
		sub += 1;
	}	//end while

	//display the contents of the array
	displayArray(sales, 4);

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
void displayArray(double dollars[], int numElements)
{
	cout << fixed << setprecision(2) << endl << endl;
	int sub = 0;
	while (sub < numElements)
	{
		cout << "Sales for Region " << sub + 1 << ": $";
		cout << dollars[sub] << endl;
		sub += 1;
	}	//end while
}	//end of displayArray function