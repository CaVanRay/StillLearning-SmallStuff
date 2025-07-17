#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>


using namespace std;


int main()
{
	char choice;
	int weapon;
	srand(time(0));

	do{
		cout << endl << "Time to Play Rock Paper Scissors!" << endl;
		cout << "Pick your weapon!" << endl;
		cout << "1 = Rock" << endl;
		cout << "2 = Paper" << endl;
		cout << "3 = Scissors" << endl;
		cout << "Input number (1-3): ";
		cin >> weapon;
		int random_number = (rand() % 3) + 1;

		if(weapon==1){
			if(random_number==3){
				cout << "You Smashed my Scissors!" << endl;
			}else{
				cout << "I Covered your Rock!" << endl;
			}
		}
		if(weapon==2){
			if(random_number==1){
				cout << "You Covered my Rock!" << endl;
			}else{
				cout << "I Sliced your Paper!" << endl;
			}
		}
		if(weapon==3){
			if(random_number==2){
				cout << "You Sliced my Paper!" << endl;
			}else{
				cout << "I Smashed your Scissors!" << endl;
			}
		}




		cout << endl << "Do you want to play again? (Y/N): ";
		cin >> choice;
		choice = toupper(choice);
	}while(choice == 'Y');
}