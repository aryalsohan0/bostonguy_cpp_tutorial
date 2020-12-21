#include <iostream>
#include <string>
using namespace std;

class BuckysClass{
	public:
		BuckysClass(string z){ // constructor name same as class name
            setName(z);
			cout << "This is new object" << endl;
		}
		void setName(string x){
			name = x;
		}
		string getName(){
			return name;
		}
		
	private:
		string name;
};


int main()
{
	
	BuckysClass bo("Lucky Bucky");
    cout << bo.getName() << endl;

    BuckysClass bo2("Sally with Salad");
    cout << bo2.getName();

	return 0;
}
