/*
Define a function void pronounce(int n) that prints out (to cout) the English spelling of n. For example,

    pronounce(25); prints twenty-five
    pronounce(103); prints one hundred three
    pronounce(2014); prints two thousand fourteen
    pronounce(999999); prints nine hundred ninety-nine thousand nine hundred ninety-nine 
*/

#include <iostream>
using namespace std;

// this function prints out the English pronunciation of n
void pronounce(int n) {
   // base cases
   if (n<20) {
      // array of strings rather than 20 if statements 
      char units[20][10] = {"zero", "one", "two", "three", "four",
                            "five", "six", "seven", "eight", "nine",
                            "ten", "eleven", "twelve", "thirteen",
                            "fourteen", "fifteen", "sixteen", "seventeen",
                            "eighteen", "nineteen"};
      cout << units[n];
   }
   // more base cases
   else if (n%10==0 && n<100) {
      char tenfolds[10][8] = {"", "ten", "twenty", "thirty", "forty",
                               "fifty", "sixty", "seventy", "eighty", "ninety"};
      cout << tenfolds[n/10];
   }
   else if (n<100) {
      // pronounce the tens place
      pronounce(/* fill in here */  );
      // pronounce the ones place
      cout << "-";
      pronounce( /*fill in here */  );
   }
   // exact multiple of 100
   else if (n%100==0 && n<1000) {
      /* fill in here */ ;                    
      cout << " hundred";
   }
   else if (n<1000) {
      pronounce(n - (n%100));
      cout << " ";
      pronounce(n%100);
   }
   else if (n<1E6) {
      // how many thousands?
      /* fill in here */  ;

      cout << " thousand";
      
      // what else?
      if (n%1000 != 0) {
         cout << " ";
         pronounce(/* fill in here */ );
      }
   }
   else if (n<1E9) {
      pronounce(n/(int)1E6);
      cout << " million";
      if (n%(int)1E6 != 0) {
         cout << " ";
         pronounce(n%(int)1E6);
      }
   }
   else { // INT_MAX is less than a trillion
      pronounce(n/(int)1E9);
      cout << " billion";
      if (n%(int)1E9 != 0) {
         cout << " ";
         pronounce(n%(int)1E9);
      }
   }
}

//Do not change below 
int main() {
   int n;
   cin >> n;
   pronounce(n); 
}
