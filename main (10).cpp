//TO-DO: Shriya Lama
//TO-DO: November 14
//CS1428 Lab
//Lab 11
//Description: this program will track a small library
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <iomanip>

using namespace std;
    
//TODO: Create your struct
struct Book{
    string title;
    int publishingYear;
    int numPages;
    int numCopies;
};

int main()
{
    const int SIZE = 3;
    Book books[SIZE];
    int total = 0,
    longestIndex = 0,
    oldestIndex = 0;
    
for(int i = 0; i < SIZE; i++)
{
//TODO: Prompt/read book information
//adds quanitity current book to total books
cout << "Book#1" << i+1 << endl;
cout << "Enter title:"<< endl;
getline (cin, books[i].title);

cout << "Enter publishing year:"<< endl;
cin >> books[i].publishingYear;

cout << "Enter number of pages:"<< endl;
cin >> books[i].numPages;

cout << "Enter number of copies:"<< endl;
cin >> books[i].numCopies;

for (int i=0; i<SIZE; i++)
{
total += books[i].numCopies;
}

//TODO: Find the index of the oldest book
for (int i=1; i<SIZE; i++)
{
    if (books[i].publishingYear < books[oldestIndex].publishingYear)
    {
        oldestIndex=1;
    }
}
}

//TODO: Find the index of the longest books
for (int i=0; i<SIZE; i++)
{
    if (books[i].numPages > books[longestIndex].numPages)
    {
        longestIndex=1;
    }
}

cout << endl << endl;

//TODO: output the total number of books, the name of the oldest book,
//and the name of book with the largest number of pages.
cout << "Total number of books:" << total << endl;
cout << "Name of the oldest book:" << books[oldestIndex].title << endl;
cout << "Name of the longest book:" << books[longestIndex].title << endl;

return 0;
}