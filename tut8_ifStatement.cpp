#include <iostream>
using namespace std;

int main()
{
    if (2 < 3){
        cout << "2 is less than 3" << endl;
    }

    if (1 >= 1){
        cout << "1 is greater than or equal to 1" << endl;
    }

    if(2 > 4){
        cout << "2 is greater than 4" << endl;
    }

    if(5==5){
        cout << "5 is equal to 5" << endl;
    }

    int a = 8;
    int b = 7;
    if(a != b){
        cout << "a(=8) is different from b(=7)" << endl;
    }

    return 0;
}