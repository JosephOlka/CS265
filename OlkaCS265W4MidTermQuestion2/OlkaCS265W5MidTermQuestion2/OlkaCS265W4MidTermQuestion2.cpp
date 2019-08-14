//******************************************************************//
//Joseph Olka 
//CS265
//Week 4 MidTerm Question 2
//This Program takes input of Number of Quaters, Nickels and Dimes
//Then converts thos values to the quantity of pennies.
//*******************************************************************//

//Inlude Librarys/dependencies
#include <iostream>											
#include <iomanip>								

using namespace std;

//Define Constants
const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;

//Exectuable Statement
int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);

	//Variable Declaration
	int run = 1;
	int numberOfQuarters = 0;
	int numberOfDimes = 0;
	int numberOfNickels = 0;

	//Loop through program
	while (run == 1)
	{
		//Prompt user
		cout << "Welcome to the Change to Penny Calculator: " << endl;
		cout << "Do you want to use the system? Please enter 1 for yes 0 for no: " << endl;
		cin >> run;
		cout << endl;
		if (run != 1)
			break;
		else;
		cout << "How many Quarters do you have: " << endl;
		cin >> numberOfQuarters;
		cout << endl;
		cout << "How many Dimes do you have: " << endl;
		cin >> numberOfDimes;
		cout << endl;
		cout << "How many Nickles do you have: " << endl;
		cin >> numberOfNickels;
		cout << endl;
		cout << "You Have " << (numberOfQuarters * QUARTER_VALUE + numberOfDimes * DIME_VALUE + numberOfNickels * NICKEL_VALUE) << " Pennies worth of change. At a value of : $" << (float(numberOfQuarters * QUARTER_VALUE + numberOfDimes * DIME_VALUE + numberOfNickels * NICKEL_VALUE)/100) <<endl;


	}// End While
	system("pause");							//Pause program execution to display values on screen
	return 0;
}