// File: functionsReturn
// Created by Dayton Baxter on 9/14/2017 for CS1410
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

/* Define a function that takes one input
 * paremeter (integer), it increments the
 * value by one, and it returns the new value to the user */

// Constants

// Prototypes
int Increment(int i); //requires an integer
void ReallyIncrement(int &i); //requires an address of and integer

// Main Program Program
int main()
{
    int num = 0;
    int num2 = 0;

    cout << "Number is: " << num << endl;

    num2 = Increment(num);
    cout << "Number2 is: " << num2 << endl;

    cout << "Address of num: " << &num << endl;

    ReallyIncrement(num);
    cout <<"Number is " << num << endl;

    return 0;

}

// Function Definitions
// Passing parameters by value
int Increment(int i)
{
    cout << "Address of i inside Increment: "
         << &i <<endl;
    i++;

    return i;
}

// Increment original integer by 1
// Passing parameter by reference
void ReallyIncrement(int &i)
{
    cout << "Address of i inside ReallyIncrement: "
         << &i <<endl;
    i++;
}