// name: Lilit Khamalyan
// date: 01/07/2020
// Program 2-22: Suppose you earn $6,000 per month and you are allowed to contribute a portion of your gross monthly pay to a retirement plan.
// You want to determine the amount of your pay that will go into the plan if you contribute 5%, 7%, 10% of your gross wages.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
     // variables to hold monthly salary and contribution
     double monthlySalary = 6000.0;
     double contribution;
     // Calculate and display a 5% contribution 
     contribution = 6000.0 * 0.05;
     cout << "5% contribution is $" << contribution << " per month." << endl;
     // Calculate and display a 7% contribution 
     contribution = 6000.0 * 0.07;
     cout << "7% contribution is $" << contribution << " per month." << endl;
     // Calculate and display a 10% contribution 
     contribution = 6000.0 * 0.1;
     cout << "10% contribution is $" << contribution << " per month." << endl;
     system("pause");
     return 0;
}