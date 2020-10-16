/* ****************************************************************
 * @author: Ryan Jule Cruz
 * @app name: Budget
 * @app desc: ITE6102 - Week 005
 * @history:
 *  - <2020/10/15> | UserInfo
 *      -- Write a program that accepts user’s name, password and address and 
 *         display them back using the format 
 *         “Hi, I am user’s name. I live at user’s address.”.
                Restrictions:
                    Use only three variables.
                    Make sure you support spaces.
 * ****************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string strName, strPassword, strAddress;
  cout << "Enter your name: ";
  getline(cin,strName);
  cout << "Enter your password: ";
  getline(cin,strPassword);
  cout << "Enter your address: ";
  getline(cin,strAddress);
  cout << "Hi, I am " << strName << ". I live at " << strAddress << ".\n";
}