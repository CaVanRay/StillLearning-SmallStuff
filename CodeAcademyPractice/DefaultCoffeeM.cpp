#include <iostream>

#include "DefaultCoffee.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	// coffee black
	cout << make_coffee();
	
	// coffee with milk
	cout << make_coffee(true);
	
	// coffee with milk and sugar
	cout << make_coffee(true, true);
	
	// coffee with sugar
	cout << make_coffee(false, true);
	
}