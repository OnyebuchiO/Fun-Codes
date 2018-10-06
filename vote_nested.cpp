/*
This program takes an input age representing someone's age. If it is 18 or bigger, print

You can vote

If it is less than 18 but nonnegative, print

Too young

If it is negative, print

Time traveller!

This is the same as vote.cpp but with a different structure
*/  
#include <iostream>
using namespace std;

int main() 
{
   int age;
   cin >> age;
   if ( age < 18  )
   {
      if ((age >= 0) && (age <18)  ) 
      {
        cout << "Too young"<< endl;
      }
      else
      {
        cout << "Time Traveller!" << endl;
      }
   }
   else 
   {
    cout << "You can vote"<< endl;
   }

   return 0;
}
