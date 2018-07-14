/***********************************************************************
* Program:
*    Checkpoint 02a, Structs
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Student
{
   string firstName;
   string lastName;
   int id;
};

void displayStudent(Student user)
{
   cout << endl;
   cout << "Your information:" << endl;
   cout << user.id << " - " << user.firstName << " " << user.lastName << endl;
}

Student retrieveUserInfo()
{
   Student user;
   cout << "Please enter your first name: ";
   cin >> user.firstName;
   cout << "Please enter your last name: ";
   cin >> user.lastName;
   cout << "Please enter your id number: ";
   cin >> user.id;
   return user;
}
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Student user = retrieveUserInfo();
   displayStudent(user);
   return 0;
}
