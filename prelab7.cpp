//Shriya Lama
//Oct 14
// Lab 7 Prelab Assignment

// Move the indicated code into functions.
#include <iostream>
using namespace std;

// Function to print out the welcome message
void printWelcomeMessage() {
    cout << "Welcome to my fabulous payment calculator!" << endl
         << "This program will take a principal amount and a number of payments, and" << endl
         << "return the cost of each payment!" << endl << endl;
}

// Function to prompt the user for principal amount and number of payments,
// and calculate the cost of each payment
double calculatePayment() {
    double payment;
    int payments;
    float principal;

    cout << "Please enter a principal amount: ";
    cin >> principal;
    cout << "Please enter a number of payments: ";
    cin >> payments;

    payment = static_cast<double>((1.2 * principal) / payments);

    return payment;
}

int main() {
    // Call the function to print the welcome message
    printWelcomeMessage();

    // Call the function to calculate the payment and assign the returned value to the variable 'payment'
    double payment = calculatePayment();

    // Print the result
    cout << "Each payment will cost: " << payment;

    return 0;
}
