//******************************************************************//
//Joseph Olka 
//CS265
//Week 4 Assignment
//This Program takes in  7 or 8 charcters in a phrase and outputs a 
//Phone Number
//*******************************************************************//

//Inlude Librarys/dependencies
#include <iostream>								
#include <string>								
#include <iomanip>								
#include<ios> 
#include<limits> 

using namespace std;



//Exectuable Statement
int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);

	//Variable Declaration
	int run = 1;
	int i;
	char inputChar[8];
	char switchChar;
	char outputChar[7];

	//Loop through program
	while (run == 1)
	{
		//Clear User Vars
		for (i = 0; i < 8; i++)
			inputChar[i] = ' ';
		for (i = 0; i < 7; i++)
			outputChar[i] = ' ';

		//Prompt user
		cout << "Welcome to the Automated Phrase to Phone Number Generator: " << endl;
		cout << "Do you want to use the system? Please enter 1 for yes 0 for no: " << endl;
		cin >> run;
		cout << endl;

		//Logic Split if selection was 1 then run program all else exit
		if (run == 1)
		{
			cout << "Please Enter Phrase to Create Phone Number Minimum 7 Letters: " << endl;
			cin >> inputChar[0] >> inputChar[1] >> inputChar[2] >> inputChar[3] >> inputChar[4] >> inputChar[5] >> inputChar[6];
			cout;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			for (i = 0; i < 7; i++)
			{
				switchChar = inputChar[i];
				switch (switchChar)
				{
				case 'a':
				case 'b':
				case 'c':
				case 'A':
				case 'B':
				case 'C':
					outputChar[i] = '2';
					break;
				case 'd':
				case 'e':
				case 'f':
				case 'D':
				case 'E':
				case 'F':
					outputChar[i] = '3';
					break;
				case 'g':
				case 'h':
				case 'i':
				case 'G':
				case 'H':
				case 'I':
					outputChar[i] = '4';
					break;
				case 'j':
				case 'k':
				case 'l':
				case 'J':
				case 'K':
				case 'L':
					outputChar[i] = '5';
					break;
				case 'm':
				case 'n':
				case 'o':
				case 'M':
				case 'N':
				case 'O':
					outputChar[i] = '6';
					break;
				case 'p':
				case 'q':
				case 'r':
				case 's':
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
					outputChar[i] = '7';
					break;
				case 't':
				case 'u':
				case 'v':
				case 'T':
				case 'U':
				case 'V':
					outputChar[i] = '8';
					break;
				case 'w':
				case 'x':
				case 'y':
				case 'z':
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					outputChar[i] = '9';
					break;
				
				}//Close Switch/Case
			
			}//Close while
			cout << outputChar[0] << outputChar[1] << outputChar[2] << "-" << outputChar[3] << outputChar[4] << outputChar[5] << outputChar[6] << endl
			<< endl;
		}//Close if
		else if (run == 0)
		{
			run = 0;
			cout << "Good Bye!" << endl;
		}//Close if

	}//Close while run
	

	return 0;
}//Close main