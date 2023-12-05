//TO-DO: Shriya Lama
//TO-DO: 19 September 2023
//CS1428 Lab
//Lab 3
//Description: this program will allow the user to play 
//Number Guessing Game against a randomized computer opponent

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Number Guessing Game" << endl
         << " 1. One" << endl
         << " 2. Two" << endl
         << " 3. Three" << endl
         << "Guess a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):
    if (user_num==1 && comp_num==1){
        cout << "You both chose 1. It's a tie" << endl;
    }
    else if (user_num==1 && comp_num==2){
        cout << "Computer wins" << endl;
    }
    else if (user_num==1 && comp_num==3){
        cout << "Computer wins" << endl;
    }
    else if (user_num==2 && comp_num==1){ 
            cout << "2 beats 1. You win" <<endl;
    }
    else if (user_num==2 && comp_num==2){
        cout << "You both chose 2. It's a tie" << endl;
    }
    else if (user_num==2 && comp_num==3){
        cout << "Computer wins" << endl;
    }
    else if (user_num==3 && comp_num==1){
        cout << "3 beats 1. You win" << endl;
    }
    else if (user_num==3 && comp_num==2){
        cout << "3 beats 2. You win" << endl;
    }   
    else if (user_num==3 && comp_num==3){
        cout << "You both chose 3. It's a tie" << endl;
    }
        
    else {
        cout << "ERROR - Invalid Input. Terminating Program." << endl;  
    }
    
    // Exit the program:
    return 0;
}