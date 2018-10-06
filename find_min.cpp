/*
Write a function find_min that takes a double pointer indicating the start of an array, and an int indicating the length of the array. It should return a pointer to the minimum number in the array.

You can assume there are no ties. 
*/

#include <iostream>
using namespace std;

double* find_min(double* a, int n) {
   /* write your code below */
    double* min = a;
    for(int i = 1; i < n; i++)
    {

        
       if(*min > a[i])
       min = a + i;
        
        
    }
    
    return min;




   /* Do not change any code below */
}

int main() {
   int n;
   cin >> n;
   double arr[100];
   for (int i=0; i<n; i++) cin >> arr[i];

   // call your function and save result
   double* min_loc = find_min(arr, n);
   
   cout << ...;    // there is some hidden testing code here
   cout << "Pointed-to value is " << *min_loc << endl;

   // change that variable to 1000
   *min_loc = 1000;
   // run your code again
   min_loc = find_min(arr, n);
   
   cout << ...;    // there is some hidden testing code here
   cout << "Pointed-to value is " << *min_loc << endl;
}
