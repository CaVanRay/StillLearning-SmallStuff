#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
	
	
	double WeightEarth;
	double WeightMars;
	double DistMile;
	double DistKilo;
	double TempF;
	double TempK;
	
	
	cout << " Input weight on earth: ";
	cin >> WeightEarth;
	cout << "\n\n Input distance in miles: ";
	cin >> DistMile;
	cout << "\n\n Input temperature in Fahrenheit: ";
	cin >> TempF;
	
	
	WeightMars = WeightEarth * 0.376;
	DistKilo = DistMile/1.609;
	TempK = TempF-32;
	TempK = TempK * (5/9);
	TempK = TempK + 273.15;
	
	cout << "\n\n Weight on Mars = " << WeightMars;
	cout << "\n\n Distance in Kilometers = " << DistKilo;
	cout << "\n\n Temperature in Kelvins = " << TempK;
	
	
	
}