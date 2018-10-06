/*
This program takes two inputs: an integer n and a string text. Complete it so that it prints out the text over and over, a total of n times.
Don't print any spaces or newlines. For example,

    if the input is 2 hots the output should be hotshots
    if the input is 5 /\ the output should be /\/\/\/\/\
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   int n;
   string text;
   cin >> n >> text;

   // repeat n times
   // see page 144 for an example of defining the loop control variable
   for ( int i = 0; i <= n ; i++)
   {
      cout <<text;

   }
    cout << endl;
   return 0;
}
