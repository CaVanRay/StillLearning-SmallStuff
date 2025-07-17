#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int number = ((rand() % 100) + 1);
	int guess, balance = 100, bet;

	cout << endl << "Let's gamble away our childrens college funds!" << endl;

	while(balance > 0) {
		cout << "your children still have $" << balance << endl;
		cout << "So how much do you want to lose? :$";
		cin >> bet;

		if(bet <= 0 || bet > balance) {
			cout << endl << "Can't do that, your kids have $" << balance << " please enter a bet between 1 & " << balance;
			continue;
		}
		
		cout << endl << "Guess a number between 1 & 100: ";
		cin >> guess;

		if(guess < 1 || guess > 100) {
			cout << "I said BETWEEN 1 & 100, Guess again: ";
			cin >> guess; 
		}

		if(guess == number){
			cout << "Congratulations! You win!";
			balance += (bet * 10);
			number = ((rand() % 100) + 1);
			cout << endl << "New number has been picked" << endl;
		} else if(guess < number){
			cout << "Too low!" << endl;
			balance -= bet;
		} else {
			cout << "Too high!" << endl;
			balance -= bet;
		}
		if(balance <= 0){
			cout << "Your kids are out of money, get lost!" << endl;
			cin.ignore();
			cin.get();
		}
	}
	return 0;
}