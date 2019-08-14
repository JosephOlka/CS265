//******************************************************************//
//Joseph Olka 
//CS265
//Week 4 MidTerm Question 4
//This Program Opens file resources IntegerList.txt
//Then parses the data into an even and odd array list
//Lastly it outputs the list and sum of the Odd and Even Lists
//*******************************************************************//


#include <iostream>								
#include <fstream>								
#include <string>								
#include <iomanip>								

using namespace std;


//Main Program Setup
int main()
{
	//Variable Declaration
	int oddIdx = 0;
	int evenIdx = 0;
	ifstream inFile;
	int inReadData;
	int oddArr[100];
	int evenArr[100];
	int remainder;
	int i =0;
	int sumEven =0;
	int sumOdd =0;

	//Exectuable Statement
	//Open File Sources
	inFile.open("W4Q4IntegerList.txt");
	//Setup outfile data format
	cout << fixed << showpoint;
	cout << setprecision(2);

	//Read Data from File and sort into Even or Odd array
	while (inFile >> inReadData)
	{
		remainder = inReadData % 2;
		if (remainder == 0)									//It is even
		{
			evenIdx = evenIdx + 1;
			evenArr[evenIdx] = inReadData;
		}//End if
		else												//it is odd
		{
			oddIdx = oddIdx + 1;
			oddArr[oddIdx] = inReadData;
		}//End else
	}// End While
	

	//Setup to print Even Numbers and Sum
	cout << "The Even Numbers are: " << endl;
	for (i = 1; i <= evenIdx; i++)
	{
		cout << evenArr[i] << endl;
		sumEven = evenArr[i] + sumEven;
	}
	cout << "The sum of the Even Numbers is: " << sumEven << endl << endl;


	//Setup to print Odd Numbers and Sum
	cout << "The Odd Numbers are: " << endl;
	for (i = 1; i <= oddIdx; i++)
	{
		cout << oddArr[i] << endl;
		sumOdd = oddArr[i] + sumOdd;
	}
	cout << "The sum of the Odd Numbers is: " << sumOdd << endl;

	
	//Close File Sources
	inFile.close();
	
	//Return Statments
	system("pause");
	return 0;
}//End Main

