//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by Brandon on 4/30/2018

#include <iostream>
using namespace std;

int main()
{
	//declare arrays and fill with data
	double gradesPercentages[5] = { 0, .6, .7, .8, .9 };
	double gradesPercentagesMax[5] = { .5999, .6999, .7999, .8999, 1 };
	char grades[5] = { 'F', 'D', 'C', 'B', 'A' };
	double userPoints;
	double userTotal;
	int userQuit = 0;
	while (userQuit != -1)
	{
		cout << "Enter points earned: " << endl;
		cin >> userPoints;
		cout << "Enter total points possible:" << endl;
		cin >> userTotal;


		for (int x = 0; x < 5; x++)
		{

			if ((userPoints / userTotal)  >= gradesPercentages[x] && (userPoints / userTotal)  <= gradesPercentagesMax [x])
				cout << "Your grade is: " << grades[x] << endl;
		}
		std::cout << "If you have no more assignments, type -1, if not, type 0." << std::endl;
		std::cin >> userQuit;
	}
	system("pause");
	return 0;
}	//end of main function