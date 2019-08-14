//******************************************************************//
//Joseph Olka 
//CS265
//This Program Converts and Displays a 12 hour to 24 hour or 
//24 hour to 12 hour user inputed value
//Week 5 Assignmnet
//*******************************************************************//
#include <iostream>								
#include <string>								
#include <iomanip>								

using namespace std;
//Function Prototype
int menu();
void get12Hour(int& outHour, int& outMin, string& outPeriod);
void get24Hour(int& outHour, int& outMin);
void convert24TO12(int inHour, int inMin, int& outHour, int& outMin, string& outPeriod);
void convert12TO24(int inHour, int inMin, string inPeriod, int& outHour, int& outMin);
void display12Hour(int inHour, int inMin, string inPeriod);
void display24Hour(int inHour, int inMin);


int main()
{
	//Intitialize Variable
	int run = 1;
	int state = 0;
	int hour = 0;
	int min = 0;
	string period = "" ;

	//Main loop 
	while (run == 1)
	{
		switch (state)
		{
		//Main State wait till user Input
		case 0:
			//Clear passing Variables
			hour = 0;
			min = 0;
			period = "";
			state = menu();
			break;
		//User Selected convert 12 to 24 hours
		case 1:
			get12Hour(hour, min, period);
			convert12TO24(hour,min,period,hour,min);
			display24Hour(hour,min);
			state = 0;
			break;
		//User Select convert 24 to 12 hours
		case 2:
			get24Hour(hour, min);
			convert24TO12(hour, min, hour, min, period);
			display12Hour(hour, min, period);
			state = 0;
			break;
		//User Select Exit
		case 3:
			run = 0;
			break;
		//User Invalid selection
		default:
			cout << "Not a valid Selection" << endl << endl;
			state = 0;
			break;
		}//End Sswitch/Case
	}//End while
}//End Main


//Function Implemintation
//menu
int menu()
{
	int selection = 0;
	cout << "*******************************************************" << endl;
	cout << " Welcome to the time converter program" << endl;
	cout << " Please choose from one of the following menu options:" << endl;
	cout << " 1) Convert time from 12 to 24 hour Time " << endl;
	cout << " 2) Convert time from 24 to 12 hour Time " << endl;
	cout << " 3) Exit Program " << endl;
	cout << "*******************************************************" << endl;
	cin >> selection;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout  << endl;
	return selection;
}//End function menu

//get12Hour
void get12Hour(int& outHour, int& outMin, string& outPeriod)
{
	string holder;
	char buffer[10];
	cout << "Enter 12 hour time in the following format HH:MM AM/PM" << endl;
	cin >> buffer[1] >> buffer[2] >> buffer[3] >> buffer[4] >> buffer[5] >> holder;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (buffer[2] == 58)
	{
		buffer[5] = buffer[4];
		buffer[4] = buffer[3];
		buffer[3] = buffer[2];
		buffer[2] = buffer[1];
		buffer[1] = '0';
	}
	outPeriod = holder;
	if (outPeriod == "am" or outPeriod == "AM")
		outPeriod = "AM";
	if (outPeriod == "pm" or outPeriod == "PM")
		outPeriod = "PM";
	holder = "";
	holder += buffer[1];
	holder += buffer[2];
	outHour = stoi(holder);
	holder = "";
	holder += buffer[4];
	holder += buffer[5];
	outMin = stoi(holder);
}//End function get12Hour

//get24Hour
void get24Hour(int& outHour, int& outMin)
{
	string holder;
	char buffer[10];
	cout << "Enter 24 hour time in the following format HH:MM " << endl;
	cin >> buffer[1] >> buffer[2] >> buffer[3] >> buffer[4] >> buffer[5];
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (buffer[2] == 58)
	{
		buffer[5] = buffer[4];
		buffer[4] = buffer[3];
		buffer[3] = buffer[2];
		buffer[2] = buffer[1];
		buffer[1] = '0';
	}
	holder = "";
	holder += buffer[1];
	holder += buffer[2];
	outHour = stoi(holder);
	holder = "";
	holder += buffer[4];
	holder += buffer[5];
	outMin = stoi(holder);
}//End function get24Hour

//convert24TO12
void convert24TO12(int inHour, int inMin, int& outHour, int& outMin, string& outPeriod)
{
	if (inHour <= 12)
	{
		outHour = inHour;
		outMin = inMin;
		outPeriod = "AM";
	}//End if
	else
	{
		outHour = inHour - 12;
		outMin = inMin;
		outPeriod = "PM";
	}//End else

}//End function convert24TO12

//convert12TO24
void convert12TO24(int inHour, int inMin, string inPeriod, int& outHour, int& outMin)
{
	if (inPeriod == "AM")
	{
		outHour = inHour;
		outMin = inMin;
		
	}//End if
	else
	{
		outHour = inHour + 12;
		outMin = inMin;
		
	}//End else
}//End function convert12TO24

//display12Hour
void display12Hour(int inHour, int inMin, string inPeriod)
{
	if (inMin < 10)
		cout << " Your Converted time is: " << inHour << ":" <<"0" <<inMin << " " << inPeriod << endl << endl;
	else
		cout << " Your Converted time is: " << inHour << ":" << inMin << " " << inPeriod << endl << endl;
	
}//End function display12Hour

//display24Hour
void display24Hour(int inHour, int inMin)
{
	if (inMin < 10)
		cout << " Your Converted time is: " << inHour << ":" << "0" << inMin << endl << endl;
	else
		cout << " Your Converted time is: " << inHour << ":" << inMin << endl << endl;
}//End function display24Hour