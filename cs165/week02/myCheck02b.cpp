/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
   double real;
   double imagine;
};

// TODO: Add your prompt function here
Complex prompt()
{
   Complex number;
   cout << "Real: ";
   cin >> number.real;
   cout << "Imaginary: ";
   cin >> number.imagine;
   return number;
}

// TODO: Add your display function here
void display(Complex number)
{ 
   cout << number.real << " + " << number.imagine << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   Complex sum;
   sum.real = x.real + y.real;
   sum.imagine = x.imagine + y.imagine;
   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;

   // Call your prompt function twice to fill in c1, and c2 
   c1 = prompt();
   c2 = prompt();

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   sum = addComplex(c1, c2);
   
   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
 
   return 0;
}


