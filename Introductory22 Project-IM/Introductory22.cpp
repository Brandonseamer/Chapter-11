//Introductory22.cpp - displays the contents of the array
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int orders[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

	int x = 0;
		while (x < 10)
	{
		cout << orders[x] << endl;
		x += 1;
	}  //end while

	//system("pause");
	return 0;
}	//end of main function