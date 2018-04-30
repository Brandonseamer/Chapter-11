//Intermediate23.cpp - displays the contents of two parallel arrays
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int points[5] = {62, 75, 100, 83, 85};
	char grades[5]  = {'D', 'C', 'A', 'B', 'B'};

		int x = 0;
		do{
			cout << points[x] << "->" << grades[x] << endl;
			x += 1;
		} while (x < 5);

	system("pause");
	return 0;
}	//end of main function