/*
This program should take a positive input limit and print out all the square numbers less than or equal to limit, one per line. 
For example if the input is 13 it should print out
0
1
4
9
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int limit;
   cin >> limit;

   // start a counter at 0: print 0*0 first
   int counter = 0;
   
   while ( pow(counter,2) <= limit) // while counter^2 at most limit
   {
         cout << pow(counter,2)  << endl                            ; // print out square of counter
           counter++                   ; // increase counter by one
   }

   return 0;
}
