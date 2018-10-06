/*
The exercise fill practices writing to an array in a loop. See the bottom of page 253 for a related example.

This program should take an integer n as input, then print out the square roots of the numbers from 0 to n-1.

The input/output is provided for you. Fill in the loop so that the array values contains the desired square roots.

Remember that sqrt(x) is the function to compute the square root of x. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   // read the input
   int n;
   cin >> n;

   double values[100]; // declare an array, max size 100
   for (int i = 0; i < n; i++) {      
      // element i of the array should contain the square root of i
      double squareOfI = sqrt(i);
       //cout << "This" << sqrt(i) << endl;
       values[i] = squareOfI;

   }

   for (int i = 0; i < n; i++) {
      cout << "The square root of " << i << " is " << values[i] << endl;
   }
   return 0;
}
