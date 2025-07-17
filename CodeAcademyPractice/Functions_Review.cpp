#include <iostream>

using namespace std;


/*
	bool it_call()
	{
		bool on_off_attempt;
		cout << "Hello. IT. \n";
		cout << "Have you tried turning it off and on again? y/n\n";
		cin >> on_off_attempt;
		return on_off_attempt;
	}
	
	int main(int argc, char *argv[]) 
	{	

	// Conduct IT support
	int calls = 0;
	if (it_call()){
		calls++;
	}
		
	// Check in with Jenn
	cout << "Oh hi Jen!\n";
	
	// Conduct IT support again...
	if (it_call()){
		calls++;
	}
		
	// Check in with Roy
	cout << "You stole the stress machine? But that's stealing!\n";
	
	// Conduct IT support yet again... zzzz...
	if (it_call()){
		calls++;
	}
		cout << "\n\nEND OF DAY NUMBERS\n\n# of IT calls recieved: " << calls;
	
	}

*/

string it_convo() {
	cout << "Hello. IT. \n";
	cout << "Have you tried turning it off and on again? y/n";
	string reply;
	cin >> reply;
	return reply;
}

int main() {
	
	// Conduct IT support
	string on_off_attempt;
	on_off_attempt = it_convo();
	
	// Check in with Jenn
	cout << "Oh hi Jen! \n";
	
	// Conduct IT support again...
	on_off_attempt = it_convo();
	
	// Check in with Roy
	cout << "You stole the stress machine? But that's stealing!\n";
	
	// Conduct IT support yet again...zzzz...
	on_off_attempt = it_convo();
	
}