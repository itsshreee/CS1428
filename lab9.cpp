//TO-DO: Shriya lama
//TO-DO: October 31
//CS1428 Lab
//Lab 9
//Description: this program will track game preferences for the user
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
const int SIZE = 6; //number of games
const string GAMES[] = {"Legend of Zelda", "Super Mario Bros.", "Portal", "Final Fantasy XII", "Pac-Man", "Tetris"};
double ratings[SIZE];
double total = 0;
double average;
//nt lowest_index = 0;
//Prompt the user for game ratings
cout << "Please enter a rating for the following games:" << endl;
for(int i = 0; i < SIZE; i++)
{
    cout << GAMES[i] << " : ";

    cin >> ratings[i];
    total = total + ratings[i];
}

//cout<<total;

//total =+ ratings[i];

//TODO: Determine the index of the game with the highest rating
int lowest_index = 0;
for (int i=0;  i < SIZE; i++ )
{
    if (ratings[lowest_index] > ratings[i])
    {
        lowest_index  = i;
    // GAMES[lowest_index] = GAMES[i];
    }
}
//TODO: Determine the average rating
average = total / SIZE;

cout << fixed << setprecision(1)
<< "Average rating : " << average << endl
<< "Lowest rating : " << ratings[lowest_index] << " rated "
<< GAMES[lowest_index] << endl;
return 0;
}
