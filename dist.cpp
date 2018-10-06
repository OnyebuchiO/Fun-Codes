/*
In this exercise, you will define a 2D vector length function, and you will use that to help you define a 2D distance function.

Given a 2D vector denoted (dx,dy) , its length, denoted |(dx,dy)|, is given by the formula
           ------------------
|(dx,dy)|=√  dx^2+dy^2

First, define a C++ function length(dx, dy) that returns the length of the vector (dx,dy)

. Remember that sqrt() computes the square root of a number.

Additionally, given a pair of 2D points, call them (x1,y1) and (x2,y2), the vector from one to the other is defined as  |(x1−x2,y1−y2)|
and the distance between those two points is defined as that vector's length:
distance(x1,y1,x2,y2)=|(x1−x2,y1−y2)|

Define a function distance(x1, y1, x2, y2) that computes the distance between two points, using the length function that you previously defined as a subroutine. 
*/

#include <iostream>
#include <cmath>
using namespace std;

double length(double dx, double dy) 
{
    double lengthCalc, length2;
    lengthCalc = pow(dx,2) + pow(dy,2);
    length2 = sqrt(lengthCalc);
    return length2;
    

}

double distance(double x1, double y1,double x2, double y2)
{
   return length( x1 - x2, y1 - y2 );
}

/*int main()
{
    cout << distance(10, 20, 20, 19);
    return 0;
}
*/
