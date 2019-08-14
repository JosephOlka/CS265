#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double input = 0;
double rawMin = 0;
double rawMax = 0;
double scaledMin = 0;
double scaledMax = 0;
double rawDiff = 0;
double scaledDiff = 0;
double mathHolder = 0;
double output = 0;

int main()
{
	//Configure output
	cout << fixed << showpoint;
	cout << setprecision(2);
	while (1 == 1)
	{
		double input = 0;
		double rawMin = 0;
		double rawMax = 0;
		double scaledMin = 0;
		double scaledMax = 0;
		double rawDiff = 0;
		double scaledDiff = 0;
		double mathHolder = 0;
		double output = 0;
		double ratio = 0;

		cout << "Enter raw Min" << endl;
		cin >> rawMin;
		cout << "Enter raw Max" << endl;
		cin >> rawMax;
		cout << "Enter Scaled Min" << endl;
		cin >> scaledMin;
		cout << "Enter Scaled Max" << endl;
		cin >> scaledMax;
		cout << "Enter Signal Value" << endl;
		cin >> input;

		rawDiff = rawMax - rawMin;
		scaledDiff = scaledMax - scaledMin;
		ratio = scaledDiff / rawDiff;
		mathHolder = input - rawMin;
		mathHolder = mathHolder * ratio;
		output = mathHolder + scaledMin;
		cout << "Scaled Value = " << output << endl;

	}



}