/***********************************************************************
* Program:
*    Checkpoint 00, Assignment
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Canvas
{
   private:
   int height;
   int width;
   bool resolution[100][100];
   public:
   Canvas (int w, int h)
   {
      width = w;
      height = h;
   }
   void setResolution()
   {
      height = 30;
      width = 60;
   }
   void pixelOn()
   {
      int x;
      int y;
      cout << "Enter x coordinate: ";
      cin >> x;
      cout << "Enter y coordinate: ";
      cin >> y;
      if (x < width && 0 <= x && y < height && 0 <= y)
      {
         if(resolution[x][y])
         {
            cout << "That pixel is already on!";
         } 
         else 
         {
            resolution [y][x] = true;
            cout << "Success!" << endl;
         }
      } 
      else 
      {
         cout << "Invalid height or width." << endl;
      }
   };
   void pixelOff()
   {
      int x;
      int y;
      cout << "Enter x coordinate: ";
      cin >> x;
      cout << "Enter y coordinate: ";
      cin >> y;
      if (x < width && y < height)
      {
         if(!resolution[x][y])
         {
            cout << "That pixel is already off!";
         } 
         else 
         {
            resolution[y][x] = false;
            cout << "Success!" << endl;
         }
      } 
      else 
      {
         cout << "Invalid height or width." << endl;
      }
   };
   void pixelAllOff()
   { 
      for (int y = 0; y <= height; y++)
      {
         for (int x = 0; x <= width; x++)
         {
            resolution[y][x] = false;
           /* if(resoltion[y][x])
            {
               resolution[y][x] = false;
            }*/
         }
      }
      cout << "Reset All Pixels to off..." << endl;
   };
   void displayPixels()
   {
      for (int y = 0; y <= height; y++)
      {
         for (int x = 0; x <= width; x++)
         {
            if(resolution[y][x])
            {
               cout << 8;
            }
            else 
            {
               cout << '_';
            }
         }
         cout << endl;
      }
   };
};

void start()
{
   cout << "This program allows you to paint pixel pictures" << endl;
   cout << "type 'h' for a list of commands.";
}

void help()
{
   cout << "[D] = Display all pixels." << endl
        << "[E] = Exit program." << endl
        << "[H] = Show help menu." << endl
        << "[L] = Turn on pixel. " << endl
        << "[O] = Turn off pixel. " << endl
        << "[R] = Reset all pixels to off." << endl;
   cout << "WARNING: High resoultion values may cause your picture to display improperly.\n";
}

char prompt()
{
   char command;
   cout << "Enter a command: ";
   cin >> command;
   return command;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   Canvas mainDisplay(60, 30);
   // mainDisplay.setResolution();
   mainDisplay.pixelAllOff();
   char command;
   bool doRunProgram = true;
   start();
   help();
   while(doRunProgram)
   {
      cout << endl;
      command = prompt();
      if      (command == 'd' || command == 'D')
      {
         mainDisplay.displayPixels();
      }
      else if (command == 'e' || command == 'E')
      {
         cout << "Exiting Program..." << endl;
         doRunProgram = false;
      }
      else if (command == 'h' || command == 'H')
      {
         help();
      }
      else if (command == 'l' || command == 'L')
      {
         mainDisplay.pixelOn();
      }
      else if (command == 'o' || command == 'O')
      {
         mainDisplay.pixelOff();
      }
      else if (command == 'r' || command == 'R')
      {
         mainDisplay.pixelAllOff();
      }
      else
      {
         cout << "Invalid command. For a list of commands type 'h'." << endl;
      }
   }
   return 0;
}









