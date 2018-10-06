/*
Define a recursive function int sum_up_to(int n) that computes the sum of the first n integers without using a loop.
E.g. sum_up_to(3) is 1+2+3 which is 6. 

*/


#include <iostream>
using namespace std;

int sum_up_to(int n) {
   // base case, nothing to add
   if ( /*fill here*/ )
      return /*fill here*/   ;
   else {
      // make a recursive call to n-1
      int rec_result =   /* fill here*/;
      // add the missing number
      int total = /* fill here */;
      // return the total
      return /* fill here */ ;
   }
}

/* Do not change any code below */

int main() {
   int n;
   cin >> n;
   cout << sum_up_to(n);
}
