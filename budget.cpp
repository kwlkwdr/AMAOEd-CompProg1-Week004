/* ****************************************************************
 * @author: Ryan Jule Cruz
 * @app name: Budget
 * @app desc: ITE6102 - Week 005
 * @history:
 *  - <2020/10/15> | Budget
 *      -- Write a program that accepts user’s daily budget and 
 *         display the product of the daily budget and itself.
 * ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
  float floatBudget;
  cout << "Enter your budget: ";
  cin >> floatBudget;
  cout << floatBudget * floatBudget << "\n";
}