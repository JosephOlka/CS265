//***********************************************************************************************************//
//Joseph Olka 
//CS265
//Week 4 MidTerm Question 5
//This Program
// a)	Prompt the user to input two integers : firstNum and secondNum(firstNum must be less than secondNum).
// b)	Output all odd numbers between firstNum and secondNum.
// c)   Output the sum of all even numbers between firstNum and secondNum.
// d)	Output the numbers and their squares between 1 and 10.
// e)	Output the sum of the square of the odd numbers between firstNum and secondNum.
// f)	Output all uppercase letters.

//**********************************************************************************************************//

//Inlude Librarys/dependencies
#include <iostream>											
#include <iomanip>		
#include <string>

using namespace std;

//Define Constants


//Exectuable Statement
int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);
	

	//Variable Declaration
	int run = 1;
	int firstNum = 0;
	int secondNum = 0;
	int i = 0;
	int sumEven = 0;
	int sumOfSquare = 0;
	char LETTERS[27] = "abcdefghijklmnopqrstuvwxyz";

	//Loop through program
	while (run == 1)
	{
		int firstNum = 0;
		int secondNum = 0;
		int i = 0;
		int sumEven = 0;
		int sumOfSquare = 0;
		char LETTERS[27] = "abcdefghijklmnopqrstuvwxyz";
		//Prompt user
		cout << "Welcome to Number Magic Machine " << endl;
		cout << "Do you want to use the system? Please enter 1 for yes 0 for no: " << endl;
		cin >> run;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;

		if (run != 1)
			break;
		else
		{
			//Part a
			cout << "Great now enter two numbers seperated by a space. The first must be smaller than the second: " << endl;
			cin >> firstNum >> secondNum;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;
			if (firstNum > secondNum)
			{
				cout << "You can't follow the rules then Good Bye! " << endl;
				run = 0;
				break;
			}//End if
			else
			{
				//Part b
				cout << "The Odd Numbers between your two numbers are: " << endl;
				i = firstNum;
				while (i <= secondNum)
				{
					if (0 == i % 2) //even
						i = i + 1;
					else
					{
						cout << i << endl;
						i = i + 1;
					}//End else

				}//End While
				cout << endl;
				system("pause");							//Pause program execution to display values on screen
				cout << endl << endl;

				//Part c
				cout << "The sum of all the even numbers between your two numbers is: " << endl;
				i = firstNum;
				while (i <= secondNum)
				{
					if (0 == i % 2) //even
					{
						sumEven = i + sumEven;
						i = i + 1;
					}//End if
					else
						i = i + 1;
				}//End While
				cout << sumEven<< endl<< endl;
				system("pause");							//Pause program execution to display values on screen
				cout << endl << endl;

				//Part d
				i = 1;
				cout << "The Squares of numbers 1 through 10 are:" << endl;
				while (i <= 10)
				{
					cout << i << "^2 = " << pow(i, 2) << endl;
					i = i + 1;
				}//End while
				cout << endl;
				system("pause");							//Pause program execution to display values on screen
				cout << endl << endl;

				//Part e
				cout << "The sum of the Square of the odd numbers between your two numbers is: " << endl;
				i = firstNum;
				while (i <= secondNum)
				{
					if (0 == i % 2) //even
						i = i + 1;
					else
					{
						sumOfSquare = (sumOfSquare + pow(i, 2));
						i = i + 1;
					}//End else
				}//End While
				cout << sumOfSquare << endl << endl;
				system("pause");							//Pause program execution to display values on screen
				cout << endl << endl;

				//Part f
				cout << "All of the Alphabet in Uppercase format are: " << endl;
				i = 0;
				while (i <= 26)
				{
					LETTERS[i] = toupper(LETTERS[i]);
					cout << LETTERS[i];
					i = i + 1;
				}//End while
				cout << endl<< endl;
				system("pause");							//Pause program execution to display values on screen
				cout << endl << endl;
			}//End else
		}//End else



	}// End While
	system("pause");							//Pause program execution to display values on screen
	return 0;
}//End main

