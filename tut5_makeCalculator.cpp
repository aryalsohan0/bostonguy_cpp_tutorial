#include <iostream>
using namespace std;

int main()
{
    // Declaring variables
    int a;
    int b;
    int sum;

    //Take input from user
    cout << "Enter a number boss:\n";
    cin >> a;

    cout << "Enter another number:\n";
    cin >> b;

    // Add a and b
    sum = a + b;

    //Print out sum
    cout << "The sum of those numbers is: " << sum << endl;

    system("pause"); // make output do not close without any input from user
    return 0;
}