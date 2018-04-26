//ModifyThis20.cpp - displays the hourly rate
//associated with the pay code entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare array and variable
	double rates[6] = {11.25, 10.0, 9.85,
				       8.65, 15.0, 25.0};
	char payCodes[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

	char code  = ' ';
	char found = 'N';
	int sub    = 0;

	//display hourly rate with two decimal places
	cout << fixed << setprecision(2);

	//get pay code
	cout << "Pay code (A, B, C, D, E, or F): ";
	cin >> code;
	code = toupper(code);

	while (sub < 6 && found == 'N')
	{
		if (payCodes[sub] == code)
			found = 'Y';
		else
			sub += 1;
		//end if
	}	//end while

	if (found == 'Y')
		cout << "Hourly rate: $" << 
			rates[sub] << endl;
	else
		cout << "Invalid pay code" << endl;
	//end if

	//system("pause");
	return 0;
}	//end of main function