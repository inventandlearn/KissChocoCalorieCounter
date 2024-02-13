// KissChocolateCalorieCounter.cpp
// Daniel Alteon
// ET-505: Introduction to C++ Object Oriented Programming
// 11.10.17

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	float kiss = 0, calories = 0, serving = 0;

	
	cout << "This candy jar contains 72 chocolate kisse(s)." << endl
		 << "1 Serving of chocolate kisse(s) is 8 kisse(s) and 400 calorie(s)." << endl
		 << "1 Chocolate kiss is 50 calorie(s)." << endl
		 << "How many chocolate kisse(s) did you consume? " << endl;
	cin >> kiss;
	calories = kiss * 50;
	serving = kiss / 8;
	cout << "You consumed a total of " << kiss << " chocolate kisse(s)." << endl;
	cout << "Which is " << calories << " calorie(s), and a serving size of " << fixed << showpoint << setprecision(3) << serving << "." << endl;

    return 0;
}

/*

Case 1*

This candy jar contains 72 chocolate kisse(s).
1 Serving of chocolate kisse(s) is 8 kisse(s) and 400 calorie(s).
1 Chocolate kiss is 50 calorie(s).
How many chocolate kisse(s) did you consume?
1
You consumed a total of 1 chocolate kisse(s).
Which is 50 calorie(s), and a serving size of 0.125.


Case 2*

This candy jar contains 72 chocolate kisse(s).
1 Serving of chocolate kisse(s) is 8 kisse(s) and 400 calorie(s).
1 Chocolate kiss is 50 calorie(s).
How many chocolate kisse(s) did you consume?
8
You consumed a total of 8 chocolate kisse(s).
Which is 400 calorie(s), and a serving size of 1.000.


Case 3*

This candy jar contains 72 chocolate kisse(s).
1 Serving of chocolate kisse(s) is 8 kisse(s) and 400 calorie(s).
1 Chocolate kiss is 50 calorie(s).
How many chocolate kisse(s) did you consume?
72
You consumed a total of 72 chocolate kisse(s).
Which is 3600 calorie(s), and a serving size of 9.000.

*/