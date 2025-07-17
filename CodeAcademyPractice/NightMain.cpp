#include <iostream>
#include <chrono>
#include "Night.hpp"

using namespace std;

int main(int argc, char *argv[]) {
	
	chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
	
	cout << goodnight1("tulip");
	
	chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();
	
	chrono::duration<double, milli> time_span = end - start;
	
	cout << "Time taken for goodnight1(): " <<time_span.count() << " milliseconds. \n\n";
	
	cout << goodnight2("eraser", "ivy");
	
}