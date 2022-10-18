//David Archer
//Towers Of Hanoi

#include<iostream>
#include "towersOfHanoi.h"


using namespace std;

void menu(int selection)
{
    int num;

    if (selection == 0)
        cout << "\nYou have chosen to quit the program."
        " Thank you and please come back again.\n";

    else if (selection == 1)
    {
        cout << "Enter a number: ";
        cin >> num;
        cout << "Factorial of " << num << " is: " << recursiveFactorial(num) << endl;
    }
    else if (selection == 2)
    {
        cout << "Enter number of discs: ";
        cin >> num;
        cout << "Solution to towers of hanoi:\n\n";
        recursiveTowersOfHanoi(num, 'A', 'C', 'B');

    }
    else if (selection == 3)
    {
        cout << "Enter number: ";
        cin >> num;
        cout << "Recursive summation of " << num << " is: " << recursiveSummation(num) << endl;
    }
    else
    {
        cout << "Invalid selection entered. Please try again." << endl;
    }
}
int main()
{
    int selection;
    do
    {
        cout << "The Towers Of Hanoi\n"
                "-------------------\n"
                "1) Recursive Factorial\n2) Towers of Hanoi\n3)" 
                " Recursive summation\n0) Exit \nEnter selection: ";
        cin >> selection;

        if (!cin)
        {
            cout << "Not a valid option" << "\n" << endl;
            cin.clear();
            cin.ignore(1);
        }
        else
        { 
        menu(selection);
        cout << "\n";
        }
    } while (selection !=0);
    

    system("PAUSE");
    return 0;
}

