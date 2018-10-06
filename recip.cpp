/*
Define a function recip that takes an integer argument x, and returns its reciprocal. For example recip(10) should be 0.1, and recip(3) should be 0.333333…

Note: don't use cout in your code. Just return the appropriate value. The grader will automatically add print statements as it sees fit.

Special checking for input equal to 0 is not required. 
*/

#include <iostream>
using namespace std;

double recip(int x);
/*
int main()
{
    recip(10);
    recip(3); 
  //cout << recip(10) << endl;
  //cout << recip(3) << endl;
   return 0;   
}
// return type, function name, argument list
*/
double recip(int x) 
{
    double prical;
    prical = 1.0/x;
    return prical;
   // return the correct value

}
