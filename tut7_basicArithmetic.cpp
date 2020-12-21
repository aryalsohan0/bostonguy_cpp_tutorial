#include <iostream>
using namespace std;

int main()
{
    // Subtraction
    int x = 8-4;
    cout << x << endl;

    //Multiplication
    int y = 8 * 4;
    cout << y << endl;

    // Division
    int z = 8 / 2;
    cout << z << endl;

    // Division with remainder
    int w = 9/2; // Since w is integer only integer part we will get
    cout << w << endl;

    // Remainder
    int v = 9 % 2;
    cout << v << endl;

    // Order of Precedence: Parenthesis > Division > Multi > Add > Subtract
    int u = 6 * 4 + 8 * 4 + 9 / 20;
    cout << u << endl;


    return 0;
}