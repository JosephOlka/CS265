//******************************************************************//
//Joseph Olka 
//CS265
//Week 4 MidTerm Question 3
//This Program takes two integers and an operator
//Then ouputs the equation and result
//*******************************************************************//

//Inlude Librarys/dependencies
#include <iostream>											
#include <iomanip>								

using namespace std;



//Exectuable Statement
int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);

	//Variable Declaration
	int run = 1;
	int input1 = 0;
	int input2 = 0;
	char operation = ' ';

	//Loop through program
	while (run == 1)
	{
		//Prompt user
		cout << "Welcome to the Calculator " << endl;
		cout << "Do you want to use the system? Please enter 1 for yes 0 for no: " << endl;
		cin >> run;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;
		if (run != 1)
			break;
		else;
			//Clear Varibales
			input1 = 0;
			input2 = 0;
			operation = ' ';
			cout << "Enter your: Value1 operation Value2 " << endl;
			cin >> input1 >> operation >> input2;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			switch (operation)
			{
			case '+':
				cout << input1 << " " << operation << " " << input2 << " = " << (input1 + input2) << endl << endl;
				break;

			case '-':
				cout << input1 << " " << operation << " " << input2 << " = " << (input1 - input2) << endl << endl;
				break;

			case '*':
				cout << input1 << " " << operation << " " << input2 << " = " << (input1 * input2) << endl << endl;
				break;

			case '/':
				if (input2 == 0)
				{
					cout << "Error Divide by Zero" << endl << endl;
				
				}//End IF
				else 
				{
					cout << input1 << " " << operation << " " << input2 << " = " << (float(input1) / float( input2)) << endl << endl;
				
				}//End ELse
				break;
			}//End Switch/Case



	}// End While
	system("pause");							//Pause program execution to display values on screen
	return 0;
}