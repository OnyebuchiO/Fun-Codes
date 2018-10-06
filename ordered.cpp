/*
This program takes three integers as input. 
Write a program that prints true if they are ordered (either in strictly increasing or strictly decreasing order), and false otherwise. 

For example, 1 2 3 are ordered, but 6 8 2 are not ordered.
*/
#include <iostream>
using namespace std;

int main() {
   int x, y, z;
   cin >> x >> y >> z;

   bool isDecreasing = (x > y) &&  (y > z);
   bool isIncreasing = (x < y) &&  (y < z);

   bool isOrdered = isIncreasing  ||  isDecreasing;

   // print out result, true or false   
   cout << boolalpha << isOrdered << endl;
   return 0;
}
