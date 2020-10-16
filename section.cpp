/* ****************************************************************
 * @author: Ryan Jule Cruz
 * @app name: Budget
 * @app desc: ITE6102 - Week 005
 * @history:
 *  - <2020/10/15> | Section
 *      -- Write a program that accepts user’s section, 
 *         and display them back with the format
 *         "*** Section: user’s section ***”.
 * ****************************************************************/

#include <iostream>

using namespace std;

int main()
{
  string strSection;
  cout << "Enter your section: ";
  cin >> strSection;
  cout << "*** Section: " << strSection << " ***\n";
}