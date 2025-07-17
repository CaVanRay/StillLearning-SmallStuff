#include <iostream>

using namespace std;

string sea_animal = "manatee";

void favorite_animal(string best_animal) {
	string animal = best_animal;
	cout << "Best animal: " << animal << "\n";
}

int main(int argc, char *argv[]) {
	
	favorite_animal("jaguar");
	
	cout << sea_animal << "\n";
	//cout << animal << "\n";
	
}