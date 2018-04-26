//TryThis18.cpp
//Displays the total and average number of pounds
//of coffee used during a 12-month period
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//function prototype
double getTotal(double poundsUsed[], int numElements);
void getAverage(double totalLbs,
				int numElements,
				double &avg);

int main()
{
	//declare array
	double pounds[12] = {400.5, 450.0,
		475.5, 336.5, 457.0, 325.0, 220.5, 
		276.0, 300.0, 320.5, 400.5, 415.0};
	//declare variables
	double total   = 0.0;
	double average = 0.0;

	//calculate the total and average pounds used
	total = getTotal(pounds, 12);
	getAverage(total, 12, average);

	//display the total and average pounds used
	cout << "Total pounds: " << total << endl;
	cout << "Average pounds: " << average << endl;

	//system("pause");
	return 0;
}	//end of main function

//*****function definitions*****
double getTotal(double poundsUsed[], int numElements)
{
	double totalUsed = 0.0;	  //accumulator

	//accumulate the pounds used
	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += poundsUsed[sub];
	//end for

	return totalUsed;
}	//end of getTotal function

void getAverage(double totalLbs,
				int numElements,
				double &avg)
{
	avg = totalLbs / numElements;
}	//end of getAverage function
