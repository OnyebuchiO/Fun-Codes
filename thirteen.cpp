/*
This program should take a list of integers as input (the list can be of any length). 

If any of the integers was 13, your program should print out Unlucky. 

If none of the integers was 13, it should print nothing.
Use the loop to process all the input, a boolean variable to remember whether you've seen a thirteen, 
and an if statement to check each input, and another if statement to decide whether to print.
*/
#include <iostream>
using namespace std;

int main()
{
   int value;
 
   // declare and initialize boolean variable
    bool saw_thirteen =   false     ;

   while (cin >> value)
   { // loop through all inputs
      if (value == 13 )
      {
         // we saw a thirteen!
          saw_thirteen = true;
                                
      }
      cin >> value;
   } // end of loop

   // did we see a thirteen?
   if (saw_thirteen ) {
      cout << "Unlucky";
   }

   return 0;
}
