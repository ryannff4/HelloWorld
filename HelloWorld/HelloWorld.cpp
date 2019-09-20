// a header file that allows for output to console
#include <iostream>;
using namespace std;
int main() {
	int age;

	cout << "How old are you (in years)?!\n";
	cin >> age; //read in from whatever gets put in the console, put into the age variable
	cout << "that is " << (365 * age) << " days." << endl;
	return 0;
}