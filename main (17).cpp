//TO-DO: Shriya Lama
//TO-DO: October 3
//CS1428 Lab
//Lab 5
//Description: this program will print the first n factorials

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;

int main() {

    int num,
        factorial = 1;

    // Prompt the user for a number:
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << endl;

    // TODO: Validate input, then calculate and print the factorial:
     if (num == 0)
        cout << "!0 = 1" << endl;
    else if (num > 12)
        cout << " ERROR: Valid numbers are 0 to 12 " << endl;
        
    for (int i=1; i<=num; i++){
        factorial*=i;
        cout << "!factorial="  << factorial << endl;
    }
    
    return 0;
}