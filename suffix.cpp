/*
Write a function suffix that takes a char* representing a null-terminated character array (a C string), and returns the string obtained by starting at the second letter. 
For example

suffix("thug")

should return a C string containing "hug".

Hint: you shouldn't be trying to create new memory locations or change the given string.

You're not required to check if the string is already empty. 
*/

#include <iostream>
using namespace std;

char* suffix(char* text) {
    char* newText = text;
    newText = newText + 1;

   return  newText;

   /* Do not change any code below */
}

int main() {
   char* word = (char*) "lion";
   cout << word << endl;
   cout << suffix(word) << endl;
   cout << suffix(suffix(word)) << endl;
   cout << suffix(suffix(suffix(word))) << endl;
}
