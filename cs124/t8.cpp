/***********************************************************************
* Program:
*    Assignment 00, Program Name
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream> //cout, cin, fixed 
#include <iomanip> //setprecision(), setw(),
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
double costOfQuantity(double price, int quantity)
{
   return price * quantity;
}

void totalCostOfItems(double costs[])
{
   double total = 0;
   for (int x = 0; x < 5; x++)
   {
      total = total + costs[x];
   }
   cout << "Total Cost with no discount $" << total << endl;
   if (total >= 100)
   {
      total = total*0.8;
   }
   cout << "Total cost with discount $" << total << endl;
}

int main()
{
   double price;
   int quantity;
   double cost;
   do
   { 
      cout << "Enter the price: $";
      cin >> price;
      cout << "Enter a quantity: ";
      cin >> quantity;
      cost = costOfQuantity(price, quantity);
      cout << "$" << cost << endl;
   }
   while(cost != 0);
   
   double costs[4];
   cout << "Enter the costs of five items:" << endl;
   for (int x = 0; x < 5; x++)
   {
      cin >> costs[x];
   }
   totalCostOfItems(costs);
   return 0;
}
