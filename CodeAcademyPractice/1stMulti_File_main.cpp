#include <iostream>

using namespace std;

double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(string text);

int main(int argc, char *argv[]) {
	
	cout << is_palindrome("racecar") << "\n";
	cout << tenth_power(3) << "\n";
	cout << average(8.0, 19.0) << "\n";
	
	
}