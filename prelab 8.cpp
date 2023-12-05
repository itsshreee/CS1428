// Shriya Lama
// Oct 22
// Lab 8 Pre-Lab Assignment

// Add the following functions:

// 1. 'getRadius' asks the user to enter the radius of a sphere
//     and returns the given value. (should return a double)

// 2. 'calcVolume' takes the radius and returns the volume of a sphere.

// 3. 'printResults' void type function that should print the results to
//    console.

// Your function needs to have a local variable called 'PI' which holds the
// value '3.14159'.

//The volume of a sphere is (4/3)*PI*radius^3

// The function call is provided, you just need to implement the
// function prototype and function definition.

#include <iostream>
using namespace std;

// TODO - write the prototypes here
const double PI = 3.14159;

double getRadius() {
    double radius;
    cout << "Enter the radius of sphere: " << endl;
    cin >> radius;
    return radius;
}

double calcVolume(double radius) {
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    return volume;
}

void printResults(double volume) {
    cout << "The volume of your sphere is: " << volume <<" " << "units cubed" << endl;
}

int main()
{
    double radius,
           volume;

    // TODO - call 'getRadius' function and assign the
    //        returned value to radius.
    radius= getRadius();

    volume = calcVolume(radius);

    printResults(volume);

    return 0;
}

