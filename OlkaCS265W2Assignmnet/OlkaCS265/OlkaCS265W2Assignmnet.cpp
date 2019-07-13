//******************************************************************//
//Joseph Olka 
//CS265
//Week 2 Assignment
//This Program Opens file resources inData.txt and outData.txt. 
//Then reads/parse data from inData.txt Resource File.
//Calculations are preformed on variables.
//Next Writes/Builds data into outData.txt Resource File.
//Lastly Closes file resources inData.txt and outData.txt
//*******************************************************************//


#include <iostream>								//Include head file iostream
#include <fstream>								//Include head file fstream
#include <string>								//Include head file string
#include <iomanip>								//Include head file iomanip

using namespace std;							//Includes the std prefix for ccin and cout

int main()
{
//Variable Declaration
	ifstream inFile;							//Declares input file stream variable
	ofstream outFile;							//Declares output file stream variable
	string firstName;							//Declares firstName as type string
	string lastName;							//Declares lastName as type string
	string department;							//Delcares department as type string
	double monthlyGrossSalary;					
	double bonusAsPercent;
	double taxesAsPercent;
	double distanceTraveled;
	double travelTime;
	int coffeeCupssold;
	double costOfCoffeeCup;
	double payBeforeTax;
	double payCheck;
	double averageSpeed;
	double salesAmount;

//Exectuable Statement
	//Open File Sources
	inFile.open("inData.txt");
	outFile.open("outData.txt");
	//Setup outfile data format
	outFile << fixed << showpoint;
	outFile << setprecision(2);
	//Read/Parse Data
	inFile >> firstName >> lastName >> department;
	inFile >> monthlyGrossSalary >> bonusAsPercent >> taxesAsPercent;
	inFile >> distanceTraveled >> travelTime;
	inFile >> coffeeCupssold >> costOfCoffeeCup;
	//Calculate 
	payBeforeTax = (monthlyGrossSalary * ((bonusAsPercent / 100) + 1));
	payCheck = (payBeforeTax - payBeforeTax * (taxesAsPercent / 100));
	averageSpeed = (distanceTraveled / travelTime);
	salesAmount = (coffeeCupssold * costOfCoffeeCup);
	//Write Data
	outFile << "Name: " << firstName << " " << lastName << ", " << "Department: " << department << endl
			<< "Monthly Gross Salary: $" << monthlyGrossSalary << ", " << "Monthly Bonus: " << bonusAsPercent << "%, " << "Taxes: " << taxesAsPercent << "%" << endl
			<< "Paycheck: $" << payCheck << endl
			<< "Distance Traveled: " << distanceTraveled << " miles, " << "Traveling Time: " << travelTime << " hours" << endl
			<< "Average Speed: " << averageSpeed << " miles per hour" << endl
			<< "Number of Coffee Cups Sold: " << coffeeCupssold << ", " << "Cost: $" << costOfCoffeeCup << " per cup" << endl
			<< "Sales Amount = $" << salesAmount << endl;
	//Close File Sources
	inFile.close();
	outFile.close();
	//Return Statments
	return 0;
}
