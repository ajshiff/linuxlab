/***********************************************************************
* Program:
*    Checkpoint 00, w4-test
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct Telephone
{
   long number;
   bool isRinging;
};

void answerCall(Telephone & phone)
{
   phone.isRinging = false; 
}

void displayPhoneStatus(Telephone phone)
{
   cout << "Phone Number: " << phone.number << endl;
   if (phone.isRinging)
   {
      cout << "Phone Status: " << "Ringing" << endl;
   }
   else
   {
      cout << "Phone Status: " << "Not Ringing" << endl;
   }
}

int main()
{
   Telephone myPhone;
   myPhone.number = 8014224636;
   myPhone.isRinging = true;
   if (myPhone.isRinging)
   {
      answerCall(myPhone);
   }
   displayPhoneStatus(myPhone);
   return 0;
}
