/*
The  exercise reverse4 can be done after reading Section 6.1.2.

reverse4:

Write a program that takes 4 numbers as input, and prints them out in reverse order. For example, if the input is

  4 42 15 13

then the output should be

  In reverse order, the numbers were: 13 15 42 4

Using a loop is not required


*/

#include <iostream>
using namespace std;

int main() {
    

   int nums[4]; // declare array of ints called "nums"
   cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
   cout << "In reverse order, the numbers were: ";
    cout << nums[3] << " " << nums[2] << " " << nums[1] << " "<< nums[0];
    
 
       
       
   //Add your code here.

   return 0;
}
