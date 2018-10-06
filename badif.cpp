/*
This program takes two integer inputs and compares them to see which is bigger. Its output should look like 99 is bigger than 3 or in the case the inputs are the same, Both inputs are equal.
A starter solution is given, but it has several bugs.
*/
#include <iostream>
using namespace std;

int main() 
{
   int first, second;
   cin >> first >> second;
   if (first > second) 
   {
      cout << first << " is bigger than " << second << endl;
   }

   else if (second > first) 
   {
      cout << second << " is bigger than " << first << endl;
   }
   else
   { 
      cout << "Both inputs are equal" << endl;
   }
   return 0;
}
