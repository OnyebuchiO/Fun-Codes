/*
Define a function is_even that takes an integer argument x, and returns the bool value true when x is even, and false otherwise.

Note: don't use cout in your code. Just return the appropriate value. The grader will automatically add print statements as it sees fit. 
*/
#include <iostream>
using namespace std;


bool is_even(int x)
{
   if(x % 2 == 1)
   {
       //cout << false << endl;
       return false;
   }
    else
    {
       // cout << true << endl;
        return true;
    }
    
    
}
/*
int main()
{
    int n;
    cout << "What value do you want: " << endl;
    cin >> n;
     is_even(n);   
     return 0;   
}
*/
