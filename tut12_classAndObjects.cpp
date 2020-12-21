#include <iostream>
using namespace std;

/*
 * 
 * Classes are easy way to group functions or variables
 * 
 * Objects are how you access stuff inside class
 */

class BuckysClass{
	
	// public access classifier so that it can be used outside
	public:
		void coolSaying(){
			cout << "Preaching to the Choir" << endl;
		}
	
	
};


int main(){

	BuckysClass buckysObject;
	buckysObject.coolSaying();

    return 0;
}
