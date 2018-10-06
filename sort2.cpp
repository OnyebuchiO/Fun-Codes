/*
Define a function sort2 that takes two int pointers as inputs. It should sort them so that the value pointed to by the first argument is less than or equal to the second.

Hint: use the swap idiom. Also, note that the given code has a bug. 
*/

#include <iostream>
using namespace std;

void sort2(int* a, int* b)
{
   /*Fill and/or change below */
   if ( *a > *b ) {
       int temp = *b;
       *b = *a;
       *a = temp;
       //cout << b 
       



   }
   /* do not change anything below */
}

int main() {
   int x = 4, y = 5, p = 3, q = 9, m = 5, n = 2, u = 8, v = 1;
   cout << "Before sort2(&x, &y), x is " << x << " and y is " << y << ". ";
   sort2(&x, &y);
   cout << "After x is " << x << " and y is " << y << endl;
   cout << "Before sort2(&q, &p), q is " << q << " and p is " << p << ". ";
   sort2(&q, &p);
   cout << "After q is " << q << " and p is " << p << endl;
   cout << "Before sort2(&m, &n), m is " << m << " and n is " << n << ". ";
   sort2(&m, &n);
   cout << "After m is " << m << " and n is " << n << endl;
   cout << "Before sort2(&v, &u), v is " << v << " and u is " << u << ". ";
   sort2(&v, &u);
   cout << "After v is " << v << " and u is " << u << endl;
}
