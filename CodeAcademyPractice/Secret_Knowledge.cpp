#include <iostream>

using namespace std;

void enter_code(int passcode) {
	string secret_knowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";
		
	if (passcode == 0310) {
		
		cout << secret_knowledge << "\n";
		
	} else {
		
		cout << "Sorry, incorrect!\n";
		
	}
}

int main(int argc, char *argv[]) {
	
	enter_code(0310);
	
}