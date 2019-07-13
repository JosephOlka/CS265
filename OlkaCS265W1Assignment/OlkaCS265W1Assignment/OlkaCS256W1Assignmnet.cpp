//******************************************************************//
//Joseph Olka 
//CS265
//Week 1 Assignment
//This program declares 4 variables 3 with set values and the fourth
//is an average of the of the three other variables. The Program then
//outputs the name and values of all 4 variables.
//*******************************************************************//


#include <iostream>								//Include head file iostream
using namespace std;							//Includes the std prefix for ccin and cout
int main()
{
//Variable Declaration
	int num1;									//Declares num1 as type int
	int num2;									//Declares num2 as type int
	int num3;									//Declares num3 as type int
	int average;								//Declares average as type int
//Exectuable Statement
	//Set Values
	num1 = 125;									//Sets value of num1 = 125
	num2 = 28;									//Sets value of num2 = 28
	num3 = -25;									//Sets value of num3 = -25
	average = ((num1 + num2 + num3) / 3);		//Sets average = to sum of (num1 + num2 + num3) divided by 3
//Return Statments
	cout << "num1 = " << num1 << endl;			//Output string of num1 and value followed by new line
	cout << "num2 = " << num2 << endl;			//Output string of num2 and value followed by new line
	cout << "num3 = " << num3 << endl;			//Output string of num3 and value followed by new line
	cout << "average = " << average << endl;	//Output string of average and value followed by new line
	system("pause");							//Pause program execution to display values on screen
	return 0;
}

