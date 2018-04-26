//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare array
	int scores[20] = {90, 54, 23, 75, 67, 89, 99, 100, 34, 99, 
					  97, 76, 73, 72, 56, 73, 72, 20, 86, 99};

	//declare variables
	int searchScore = 0;
	int total       = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;
	while (searchScore >= 0)
	{
		total = 0;
		//search for score
		for (int x = 0; x < 20; x += 1)
			if (scores[x] == searchScore)       
				total += 1;    
			//end if    
		//end for

		//display total
		cout << "Number of students earning a score of " 
			<< searchScore << ": " 
			<< total << endl << endl; 
	
		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while
	
	//system("pause");
	return 0;
}	//end of main function