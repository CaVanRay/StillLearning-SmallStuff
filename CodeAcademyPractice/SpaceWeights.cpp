#include <iostream>

using namespace std;


int main(int argc, char *argv[]) {
	
	double WeightEarth;
	double WeightPlanet;
	int Planet;
	
	cout << "\n\n # Planet		Relative Gravity";
	cout << "\n\n 1 Mercury		0.38";
	cout << "\n\n 2 Venus		0.91";
	cout << "\n\n 3 Mars			0.38";
	cout << "\n\n 4 Jupiter		2.34";
	cout << "\n\n 5 Saturn		1.06";
	cout << "\n\n 6 Uranus		0.92";
	cout << "\n\n 7 Neptune		1.19";
	
	cout << "\n\n Please input Planet #: ";
	cin >> Planet;
	cout << "\n\n Please input Weight on Earth: ";
	cin >> WeightEarth;
	
	switch (Planet) {
		case 1:
			WeightPlanet = WeightEarth * .38;
			cout << "\n\n On Mercury you would weigh " << WeightPlanet;
			break;
		case 2:
			WeightPlanet = WeightEarth * .91;
			cout << "\n\n On Venus you would weigh " << WeightPlanet;
			break;
		case 3:
			WeightPlanet = WeightEarth * .38;
			cout << "\n\n On Mars you would weigh " << WeightPlanet;
			break;
		case 4:
			WeightPlanet = WeightEarth * 2.34;
			cout << "\n\n On Jupiter you would weigh " << WeightPlanet;
			break;
		case 5:
			WeightPlanet = WeightEarth * 1.06;
			cout << "\n\n On Saturn you would weigh " << WeightPlanet;
			break;
		case 6:
			WeightPlanet = WeightEarth * .92;
			cout << "\n\n On Uranus you would weigh " << WeightPlanet;
			break;
		case 7:
			WeightPlanet = WeightEarth * 1.19;
			cout << "\n\n On Neptune you would weigh " << WeightPlanet;
			break;
		default:
			cout << "\n\n INVALID PLANET";
			break;
		
	}
	
	
	
	
	
}