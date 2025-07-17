#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]) {
	
	srand (time(NULL));
	int fortune = rand() % 10;
	
	if (fortune ==0) {
		cout << "Flattery will go far tonight. \n";
	} else if (fortune == 1) {
		cout << "Don't behave with cold manners.\n";
	} else if (fortune == 2) {
		cout << "May you someday be carbon neutral\n";
	} else if (fortune == 3) {
		cout << "You have rice in your teeth.\n";
	} else if (fortune == 4) {
		cout << "A conclusion is simply the place where you got tired of thinking.\n";
	} else if (fortune == 5) {
		cout << "No snowflake feels responsible in an avalanche.\n";
	} else if (fortune == 6) {
		cout << "He who laughs last is laughing at you. \n";
	} else if (fortune == 7) {
		cout << "If you look back you'll soon be going that way.\n";
	} else if (fortune == 8) {
		cout << "You will die alone and poorly dressed.\n";
	} else if (fortune == 9) {
		cout << "The fortune you seek is in another cookie.\n";
	}
}