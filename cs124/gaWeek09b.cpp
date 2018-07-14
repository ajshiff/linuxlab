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

int (char sentence[])
{

}

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   char sentence[255];
   getSentence(sentence);
   cout << sentence;
   return 0;
}
