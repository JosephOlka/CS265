//******************************************************************//
//Joseph Olka 
//CS265
//Week 3 Assignment
//This Program generates a phone bill to the terminal screen based off
//of user inputs. The bill is calculated based on servive types of Regular 
//or Premium then number of minutes used.
//*******************************************************************//

//Inlude Librarys/dependencies
#include <iostream>								
#include <string>								
#include <iomanip>								

using namespace std;

//Define Constants
	//Constants Regular Service
const double REG_SERV_FEE = 10.00;
const double REG_PER_MIN = 0.20;
const double REG_NUM_MIN_Free = 50;
	//Constants Premium Service
const double PREM_SERV_FEE = 25.00;
const double PREM_DAY_PER_MIN = 0.10;
const double PREM_DAY_NUM_MIN_Free = 75;
const double PREM_NHT_PER_MIN = 0.05;
const double PREM_NHT_NUM_MIN_Free = 100;

//Exectuable Statement
int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);

	//Variable Declaration
	int run = 1;
	int accountNumber;
	char serviceCode;
	double numberOfRegularMin;
	double numberOfPremiumDayMin;
	double numberOfPremiumNightMin;
	double amountDue;


	//Loop through program
	while (run == 1)
	{
		//Clear User Vars
		accountNumber = 0;
		serviceCode = ' ';
		numberOfRegularMin = 0;
		numberOfPremiumDayMin = 0;
		numberOfPremiumNightMin = 0;
		amountDue = 0;
		
		
		cout << "Welcome to the Automated Phone Bill System " << endl;
		cout << "Do you want to use the system? Please enter 1 for yes 0 for no: " << endl;
		cin >> run;
		cout << endl;
		if (run == 1)
		{

			cout << "Please enter the 8 digit account number: " << endl;
			cin >> accountNumber;
			cout << endl;
			cout << endl;
			cout << "Please enter the service code r or R for Regular and p or P for Premium: " << endl;
			cin >> serviceCode;
			cout << endl;

			//Switch / Case statment
			switch (serviceCode)
			{
			case 'r':
			case 'R':
				cout << "Please enter the number of minutes used: " << endl;
				cin >> numberOfRegularMin;
				cout << endl;

				amountDue = REG_SERV_FEE;

				if (numberOfRegularMin > REG_NUM_MIN_Free)
					amountDue = (amountDue + (REG_PER_MIN * (numberOfRegularMin - REG_NUM_MIN_Free)));
				else
					amountDue = amountDue;
				
				cout << "Account Number: " << accountNumber << endl
					<< "Service Code: Regular Service" << endl
					<< "************Charges*************" << endl
					<< "Number of Regular Minutes: " << numberOfRegularMin << endl
					<< "Bill Amount : $" << amountDue << endl << endl;
				break;

			case 'p':
			case 'P':
				cout << "Please enter the number of day time minutes used: " << endl;
				cin >> numberOfPremiumDayMin;
				cout << endl;
				cout << "Please enter the number of night time minutes used: " << endl;
				cin >> numberOfPremiumNightMin;
				cout << endl;

				amountDue = PREM_SERV_FEE;

				if (numberOfPremiumDayMin > PREM_DAY_NUM_MIN_Free )
					amountDue = (amountDue+ (PREM_DAY_PER_MIN * (numberOfPremiumDayMin - PREM_DAY_NUM_MIN_Free)));
				else
					amountDue = amountDue;

				if (numberOfPremiumNightMin > PREM_NHT_NUM_MIN_Free)
					amountDue = (amountDue + (PREM_NHT_PER_MIN * (numberOfPremiumNightMin - PREM_NHT_NUM_MIN_Free)));
				else
					amountDue = amountDue;

				cout << "Account Number: " << accountNumber << endl
					<< "Service Code: Premium Service" << endl
					<< "************Charges*************" << endl
					<< "Number of Premium Day Minutes: " << numberOfPremiumDayMin << endl
					<< "Number of Premium Night Minutes: " << numberOfPremiumNightMin << endl
					<< "Bill Amount : $" << amountDue << endl << endl;
				break;

			default:
				cout << "Invalid Service Type." << endl;
				break;
				
			}//End Switch/Case

		}//End If
		else if (run == 0)
		{
			run = 0;
			cout << "Good Bye!" << endl;
			break;
		}//End else If
				
	}// End While
	return 0;
}