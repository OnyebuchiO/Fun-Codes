/*
This exercise can be completed after reading Section 5.5.

 Define a function stars that takes an integer argument n. It should print out n stars.

However, if n is 13, which is bad luck, print out a sad face ":(" instead and don't print any stars. 

*/

#include <string>
#include <iostream>
using namespace std;

void stars(int n);
/*
int main()
{
  int n;
  cout << "What number do you want? ";
  cin >> n;
  stars(n);  
  return 0;  
}
*/
void stars(int n)
{
   if (n == 13 ) 
   {
      // print out frowny
      cout << ":(" << endl;                
      // the function is done                
   }
   else
   {
       for (int i = 0; i < n; i++ )
       {
          cout << "*";
       }
       cout << endl;
   }
}
