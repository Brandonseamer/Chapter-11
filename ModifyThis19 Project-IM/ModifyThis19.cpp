//ModifyThis19.cpp - displays the highest and
//lowest random numbers stored in an array
//Created/revised by <your name> on <current date>

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

//function prototypes
void displayArray(int numbers[], int numElements);
int getHighest(int numbers[], int numElements);
int getLowest(int numbers[], int numElements);

int main()
{
	//declare array and variable
	int randNums[5] = {0};
	int highNum = 0;
	int lowNum = 0;

	//initialize random number generator
	srand(static_cast<int>(time(0)));
	//assign five random integers from 1 
	//through 100 to the array
	for (int sub = 0; sub < 5; sub += 1)
		randNums[sub] = 1 + rand() % (100 - 1 + 1);
	//end for

	//display array
	displayArray(randNums, 5);

	//display highest number in the array
	highNum = getHighest(randNums, 5);
	cout << endl << "Highest number: " 
		<< highNum << endl;

	//display lowest number in the array
	lowNum = getLowest(randNums, 5);
	cout << "Lowest number: " 
		<< lowNum << endl;

	//system("pause");
	return 0;
}	//end of main function

//*****function prototype*****
void displayArray(int numbers[], int numElements)
{
	for (int sub = 0; sub < numElements; sub +=1)
		cout << numbers[sub] << endl;
	//end for
}	//end of displayArray function

int getHighest(int numbers[], int numElements)
{
	//assign first element's value
	//to the high variable
	int high = numbers[0];

	//begin the search with the second element
	int x = 1;

	//search for highest number
	while (x < numElements)
	{
		if (numbers[x] > high)
			high = numbers[x];
		//end if
		x += 1;
	}	//end while

	return high;
}	//end of getHighest function

int getLowest(int numbers[], int numElements)
{
	//assign first element's value
	//to the low variable
	int low = numbers[0];

	//begin the search with the second element
	int x = 1;

	//search for highest number
	while (x < numElements)
	{
		if (numbers[x] < low)
			low = numbers[x];
		//end if
		x += 1;
	}	//end while

	return low;
}	//end of getLowest function