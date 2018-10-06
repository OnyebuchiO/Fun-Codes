//This program is supposed to read a temperature in degrees Fahrenheit, 
//and output the corresponding temperature in degrees Celsius, using the well known formula
//Debug it to give the correct result
#include <iostream>
using namespace std;

int main() {
   double F;
    cout << "\nEnter value of Fahrenheit\n";
   cin >> F; // read input, degrees Fahrenheit

   double C = ( 5.0 * (F - 32.0) )/ 9.0 ;
    cout << "\nYour Celsius value is: ";
   cout << C << endl; // print the output, degrees Celsius

   return 0;
}
