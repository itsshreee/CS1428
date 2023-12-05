//TO-DO: Shriya Lama
//TO-DO: Oct 17
//CS1428 Lab
//Lab 7
//Description: this program will print a sequence of even and odd numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// Function prototypes:
int getUserChoice();
void findEvenNumbers();
void findOddNumbers();


int main()
{
int user_choice;
do{
cout << endl
<< "What would you like to do?" << endl
<< "1. Find even numbers 0 - N" << endl
<< "2. Find odd numbers 0 - N" << endl
<< "3. Quit program" << endl << endl;
cout << "Enter your choice: ";
user_choice = getUserChoice(); // Function call
switch(user_choice)
{
case 1:
findEvenNumbers(); // Function call
break;
case 2:
findOddNumbers(); // Function call
break;
case 3:
cout << "Terminating program..." << endl;
break;
default:
cout << "ERROR: Invalid choice. Select a valid menu item."
<< endl << endl;
}
}while( user_choice != 3 );
return 0;
}
// Function definitions:
// ADD YOUR CODE HERE
void findEvenNumbers()
{
    int N;
    cout << "Enter a number" << endl;
    cin >> N;
    
    if ( N%2 == 0)
    cout << "even numbers" << N << endl;
}

void findOddNumbers()
{
    int N;
    cout << "Enter a number" << endl;
    cin >> N;
    
    if (N%2 == 1)
    cout << "odd numbers" << N << endl;
}

int getUserChoice(){
    int N;
    cin >> N;
    return N;
}
