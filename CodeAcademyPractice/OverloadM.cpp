#include <iostream>

#include "Overload.hpp"

using namespace std;


int main(int argc, char *argv[]) {
	
	cout << fancy_number(12, 3) << "\n";
	cout << fancy_number(12, 3, 19) << "\n";
	cout << fancy_number(13.5, 3.8) << "\n";
	
}