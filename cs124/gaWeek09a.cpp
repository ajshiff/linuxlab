#include <iostream> //cout, cin, fixed 
#include <iomanip> //setprecision(), setw(),
#include <fstream>
using namespace std;


/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void getSentence(char sentence[])
{
   cin.getline(sentence, 255);
}

int changeCase(char sentence[])
{
   int uppercaseNum = 0;
   for (int x = 0; sentence[x]; x++)
   {
      if (isupper(sentence[x]))
      {
         sentence[x] = tolower(sentence[x]);
         uppercaseNum++;
      }
      else
      {
         sentence[x] = toupper(sentence[x]);
      }
   }
   return uppercaseNum;
}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   char sentence[255];
   getSentence(sentence);
   cout << "You printed " << changeCase(sentence) << " upper case letters" << endl;
   cout << sentence;
   return 0;
}
