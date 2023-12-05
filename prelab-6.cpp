//Shriya Lama
//October 8
//Pre-lab 6
// Finish the following program which multiplies all integers from 1 to
// the user's given number inclusively using a While Loop. The total should be
// assigned to the variable 'total'.
#include <iostream>

using namespace std;

int main()
{

    int num;
    int product = 1;
    int counter = 1; //initialize the variable

    // user enters a number
    cout << "Enter a positive integer to find the product of ";
    cout << "all numbers from 1 to the given number up to 15." << endl;
    cin >> num;

    // check for invalid user input
    if (num < 1  || num > 15)
    {
        cout << "Invalid Input" << endl;
        return -1; // terminate program
    }

    // multiply all numbers from 1 to the given number
    while (counter <= num)
    {
        product *= counter;
        counter++;
    }

    cout << "The product of numbers is: " << product;

    return 0;
}
