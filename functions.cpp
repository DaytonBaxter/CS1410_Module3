#include <iostream>
using namespace std;

// Task: define a function that takes two
// Floats as input parameters and it displays
// Their sum, difference, and product

void Arithmetic(float f1, float f2);
float num1;
float num2;
char repeat;

//Main program
int main()
{
    do
    {
        cout << "Please enter two numbers." << endl
             << "First, enter number 1: " << endl;
        cin >> num1;

        cout << "Now, enter number 2: " << endl;
        cin >> num2;

        Arithmetic(num1, num2);

        cout << "Do you want to continue? y or n" << endl;
        cin >> repeat;

    }while (repeat != 'n');

    return 0;
}

//Function Definition
void Arithmetic(float f1, float f2)
{
    cout << "The sum is: " << f1 + f2 << endl
         << "The difference is: " << f1 - f2 << endl
         << "The product is: " << f1 * f2 << endl;
}