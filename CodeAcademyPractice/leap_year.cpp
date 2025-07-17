#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int year;
	
	cout << "\n Input year:";
	cin >> year;
	
	if (year % 400 == 0){
		cout << "\nyes\n";
	}
	else if (year % 100 == 0){
		cout << "\nyes\n";
	}
	else if (year % 4 ==0){
		cout << "\nyes\n";
	}
	else{
		cout << "\nno\n";
	}
	
}