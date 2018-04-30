//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare arrays and fill with data
	int minimumPoints[5] = {0,300,350,400,450};
	int maximumPoints[5] = { 299, 349, 399, 449, 500 };
	char grades[5] = { 'F', 'D', 'C', 'B', 'A' };
	int userInput;
	int userQuit = 0;
	while (userQuit != -1)
	{
		cout << "Enter points earned: " << endl;
		cin >> userInput;


		for (int x = 0; x < 5; x++)
		{

			if (userInput <= maximumPoints[x] && userInput >= minimumPoints[x])
				cout << "Your grade is: " << grades[x] << std::endl;
		}
		std::cout << "If you have no more assignments, type -1, if not, type 0." << std::endl;
		std::cin >> userQuit;
	}
	system("pause");
	return 0;
}	//end of main function