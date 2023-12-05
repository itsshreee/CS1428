//TO-DO: Shriya Lama
//TO-DO: September 13
//CS1428 Lab
//Lab 2
//Description: this program will calculate the average number
//  of TV's sold by Samsung company and save the values to a
//  file

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string screen_size;
    int Id, quarter1, quarter2, quarter3, quarter4;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("Samsung_sales_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open("averages.txt");


    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << setw(10) << "ID" << setw(13) << "Screen Size" << "Average" << endl;

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file:

    fin>>Id>>screen_size>>quarter1>>quarter2>>quarter3>>quarter4>>average;
    average= (quarter1+quarter2+quarter3+quarter4)/4;
    fout<<"ID"<<"Screen size"<<"Average"<<endl;

    //

    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}