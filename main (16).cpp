//TO-DO: Shriya Lama
//TO-DO: October 10th
//CS1428 Lab
//Lab 6
//Description: this program will perform some operations on the digits of a number

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########


#include <iostream>
// ADD OTHER LIBRARIES AS REQUIRED HERE

using namespace std;

int main()
{
    int number;


    cout << "Enter a number (5 - 20):" ;

    // TODO: Compute the sum of digits and
    // the factorial of the highest digit:
    cin >> number;
    
    while (number<5 || number>20){
        cout << "INVALID INPUT!" << endl;
        cin >> number;
    }
    
    int even_sum = 0;
    int odd_sum = 0;
    int factorial = 1;
    int temp = number;
    
    while (temp > 0){
        int digit = temp % 10;
        
        if (digit % 2 == 0){
            even_sum += digit;
        }
        else{
        odd_sum += digit;
        }
        
        factorial *= digit;
        temp / 10;
    }

    cout << "Sum of even digits : " << even_sum << endl;
    cout << "Sum of odd digits : " << odd_sum << endl;
    cout << "Factorial of the number : " << factorial << endl;
    cout << "Have a great day!!!" << endl;

    return 0;
}