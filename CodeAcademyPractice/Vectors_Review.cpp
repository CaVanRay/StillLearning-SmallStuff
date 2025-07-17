#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	
	std::vector<int> evodd;
	
	evodd.push_back(2);
	evodd.push_back(4);
	evodd.push_back(3);
	evodd.push_back(6);
	evodd.push_back(1);
	evodd.push_back(9);
	
	int even = 0;
	int odd =1;
	
	for(int i = 0; i < evodd.size(); i++){
		
	if (evodd[i] % 2 == 0){
		even = even + evodd[i];
	} else {
		odd = odd * evodd[i];
	}
	
	}
	cout << "Sum of even numbers is " << even << "\n";
	cout << "Product of odd numbers is " << odd << "\n";
}