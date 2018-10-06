/*
The exercise reverse_copy involves moving elements from one place in one array to another place in another array. The examples in Section 6.2 can help give you ideas on how to proceed.

Write a code fragment to copy the values from one array src into another array dest, but in reverse order. For example, if src contains the four numbers 
------------------
| 4 | 3 | 17 | 1 |
------------------
then your code should fill dest with
------------------
| 1 | 17 | 3 | 4 |
------------------
Note: the program will read the array size n and src from input. But the input and output are done already for you. 
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   // read the input
   int n;
   cin >> n;
   int src[100]; // declare an array, max size 100
    int dest[100];
   for (int i = 0; i < n; i++) 
      cin >> src[i]; // read elements of src from input
        

   // declare dest array
   for (int i = 0; i < n; i++) 
      dest[n-1-i] = src[i];

   // copy from src to dest, but in reverse order


   // output dest to check it
   for (int i = 0; i < n; i++)
      cout << dest[i] << " ";

   return 0;
}


