//******************************************************************//
//Joseph Olka 
//CS265
//Week 4 MidTerm Question 1
//This Program Opens file resources inStudentData.txt
//Then reads/parse data from inStudentData.txt Resource File.
//Calculations are preformed on variables.
//Lastly Closes file resources inStudentData.txt 
//*******************************************************************//


#include <iostream>								
#include <fstream>								
#include <string>								
#include <iomanip>								

using namespace std;

//Function Prototype
int findAverage(int arrGrade[100], int finalIndex);
void printBelowAverage(string names[100], int grades[100], int finalIndex, int avrage);
int findHighGrade(int arrGrade[100], int finalIndex);
void printHighGrade(string names[100], int grades[100], int finalIndex, int highGrade);

int main()
{
	//Variable Declaration
	int index = 0;
	ifstream inFile;
	string strFirstName;
	string strLastName;
	string strGrade;
	string fullName[100];
	int grade[100];
	int averageGrade;
	int highestGrade;
	
	

	//Exectuable Statement
		//Open File Sources
	inFile.open("W4Q1InStudentData.txt");
	//Setup outfile data format
	cout << fixed << showpoint;
	cout << setprecision(2);
	while (inFile >> strFirstName >> strLastName >> strGrade )
	{
		index = index + 1;
		fullName[index] = strLastName + ", " + strFirstName;
		grade[index] = stoi(strGrade);
		//cout << index << " " << fullName[index] << " " << grade[index] << endl;
		
	}
	averageGrade = findAverage(grade, index);
	printBelowAverage(fullName, grade, index, averageGrade);
	highestGrade = findHighGrade(grade, index);
	printHighGrade(fullName, grade, index, highestGrade);
		
	//Close File Sources
	inFile.close();
	//cout << index << endl;
	//Return Statments
	system("pause");
	return 0;
}//End Main

//Find Average
int findAverage(int arrGrade[100], int finalIndex)
{
	int i = 0;
	int average = 0;
	for (i = 1; i <= finalIndex; i++)
	{
		average = arrGrade[i] + average;
	}
	return (average / finalIndex);
}
//Print Below Average
void printBelowAverage(string names[100], int grades[100], int finalIndex, int average)
{
	cout << "Class Average "<< average<< endl << endl;
	cout << "Students Below Class Average" << endl;
	int i = 0;
	for (i = 1; i <= finalIndex; i++)
	{
		if (grades[i] < average)
			cout << names[i] << " " << grades[i] << endl;
		else;
	}
	cout << endl;
}
//Find Highest Grade
int findHighGrade(int arrGrade[100], int finalIndex)
{
	int i = 0;
	int highest = 0;
	for (i = 1; i <= finalIndex; i++)
	{
		if (arrGrade[i] > highest)
			highest = arrGrade[i];
		else;
	}
	return (highest);
}
//Print Highest Grades
void printHighGrade(string names[100], int grades[100], int finalIndex, int highGrade)
{
	cout << "Class Highest Grade " << highGrade << endl << endl;
	cout << "Students Equal to Highest Grade" << endl;
	int i = 0;
	for (i = 1; i <= finalIndex; i++)
	{
		if (grades[i] >= highGrade)
			cout << names[i] << " " << grades[i] << endl;
		else;
	}
	cout << endl;
}