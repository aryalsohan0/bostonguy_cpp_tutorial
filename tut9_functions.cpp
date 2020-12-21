#include <iostream>
using namespace std;

void hello(); // function prototype so that we don't get error

//main function is must for cpp program
int main()
{
    hello(); // call the function hello() defined below


    return 0;
}

// create another function that returns nothing
void hello(){
    cout << "I am from function hello" << endl;
}


