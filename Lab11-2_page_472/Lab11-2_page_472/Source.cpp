//Lab11-2.c[[
//stores monthly rainfall amounts in an array
//Displays the monthly amounts or the
//total annual rainfall amount
//Created/Revised by Brandon Seamer on 4/26/2018
#include <iostream>
using namespace std;
//function prototypes
void displayMonthly(double rain[], int numElements);
void displayTotal(double rainAmt[], int elements);
int main()
{
	//declare array and variable
	double rainfall[12] = { 0.0 };
	int choice = 0;

	//get rainfall amounts
	for (int x = 0; x < 12; x += 1)
	{
		cout << "Enter rainfall for month " << x + 1 << ": ";
		cin >> rainfall[x];
	} //end for

	do
	{
		//display menu and get menu choice
		cout << endl;
		cout << "1 Display monthly amounts" << endl;
		cout << "2 Display total amounts" << endl;
		cout << "3 End Program" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		//call appropriate function or end program
		if (choice == 1)
			displayMonthly(rainfall, 12);
		else
		if (choice == 2)
			displayTotal(rainfall, 12);
		//end if 
		//end if
	} while (choice == 1 || choice == 2);
	system("pause");
	return 0;
} // end of main function

/*****function definition*****/
void displayMonthly(double rain[], int numElements)
{
	cout << "Monthly rainfall amounts:" << endl;
	for (int x = 0; x < numElements; x += 1)
		cout << rain[x] << endl;
	//end for
} //end of displayMonthly function

void displayTotal(double rainAmt[], int elements)
{
	double total = 0.0;
	for (int x = 0; x < elements; x += 1)
		total = total + rainAmt[x];
	//end for
	cout << "Total rainfall: " << total << endl;
} //end of displayTotal function
