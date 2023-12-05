/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Shriya Lama 
//Sept 26
//Lab 4
#include <iostream>

using namespace std;

int main()
{
 int P = 500;
 int S = 150;
 int H = 450;
 char choice;
 int X;
 
 cout << "Welcome to the Calorie Count-ulator!" << endl;
 cout << "Enter your meal choice ([P]izza, [S]alad, [H]amburger):" << endl;
 cin >> choice;
 
 cout << "Enter the amount of servings (1-9):" << endl;
 cin >> X;
 
 switch (choice)
 {
    case 'P':
    {
        switch (X) 
        {
        case 1:
        cout << "Total calories consumed : 500" << endl;
        break;
        case 2:
        cout << "Total calories consumed : 1000" << endl;
        break;
        case 3:
        cout << "Total calories consumed : 1500" << endl;
        break;
        case 4:
        cout << "Total calories consumed : 2000" << endl;
        break;
        case 5:
        cout << "Total calories consumed : 2500" << endl;
        break;
        case 6:
        cout << "Total calories consumed : 3000" << endl;
        break;
        case 7:
        cout << "Total calories consumed : 3500" << endl;
        break;
        case 8:
        cout << "Total calories consumed : 4000" << endl;
        break;
        case 9:
        cout << "Total calories consumed : 4500" << endl;
        break;
        default:
        cout << "ERROR: Invalid serving amount. Terminating the program." << endl;
        }
        
        
    }
    
    case 'S' :
    {
        switch (X)
        {
             case 1:
        cout << "Total calories consumed : 150" << endl;
        break;
        case 2:
        cout << "Total calories consumed : 300" << endl;
        break;
        case 3:
        cout << "Total calories consumed : 450" << endl;
        break;
        case 4:
        cout << "Total calories consumed : 600" << endl;
        break;
        case 5:
        cout << "Total calories consumed : 750" << endl;
        break;
        case 6:
        cout << "Total calories consumed : 900" << endl;
        break;
        case 7:
        cout << "Total calories consumed : 1050" << endl;
        break;
        case 8:
        cout << "Total calories consumed : 1200" << endl;
        break;
        case 9:
        cout << "Total calories consumed : 1350" << endl;
        break;
        default:
        cout << "ERROR: Invalid serving amount. Terminating the program." << endl;
        }
    }
    
    case 'H':
    {
        switch (X)
        {
         case 1:
        cout << "Total calories consumed : 450" << endl;
        break;
        case 2:
        cout << "Total calories consumed : 900" << endl;
        break;
        case 3:
        cout << "Total calories consumed : 1350" << endl;
        break;
        case 4:
        cout << "Total calories consumed : 1800" << endl;
        break;
        case 5:
        cout << "Total calories consumed : 2250" << endl;
        break;
        case 6:
        cout << "Total calories consumed : 2700" << endl;
        break;
        case 7:
        cout << "Total calories consumed : 3150" << endl;
        break;
        case 8:
        cout << "Total calories consumed : 3600" << endl;
        break;
        case 9:
        cout << "Total calories consumed : 4050" << endl;
        break;
        default:
        cout << "ERROR: Invalid serving amount. Terminating the program." << endl;   
        }
    }
    
}
  
  
  return 0;  
}