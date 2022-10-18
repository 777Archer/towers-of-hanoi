//David Archer
//Towers Of Hanoi


#include<iostream>
#include "towersOfHanoi.h"

using namespace std;

int recursiveFactorial(int num)
{
    if(num == 1)
        return 1;
    return num * recursiveFactorial(num - 1);
}

void recursiveTowersOfHanoi(int num, char fromPole, char toPole, char auxPole)
{
    if (num == 1)
    {
        cout << "Move top disk from pole " << fromPole <<
            " to pole " << toPole << endl;
        return;
    }
    recursiveTowersOfHanoi(num - 1, fromPole, auxPole, toPole);
    cout << "Move disk " << num << " from pole " << fromPole <<
        " to pole " << toPole << endl;
    recursiveTowersOfHanoi(num - 1, auxPole, toPole, fromPole);
}

int recursiveSummation(int num)
{
    if(num == 1)
        return 1;
    return num + recursiveSummation(num - 1);
}