#include <iostream>
#include <cctype>

using namespace std;

int main()
{
char choice;

	do{

		int c = 0;
		cout << endl << "GPA Calculator" << endl;
		cout << endl << "How many classes?" << endl;
		cin >> c;
		double classes[c];
		double total = 0, gpa = 0;
		int x = c;
		int y = c;
		while(x>0){
			c--;
			cout << endl << "Please input GPA for class #" << x << endl;
			cin >> classes[c];
			total = total + classes[c];
			x--;
		}

		gpa = total/y;
		cout << endl << "Your combined gpa is: " << gpa << endl;
		cout << endl << "Would you like to try again? (Y/N) ";
		cin >> choice;
		choice = toupper(choice);

} while (choice == 'Y');

return 0;

}