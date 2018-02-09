#include <iostream>
#include <string>

using namespace std;








int main() 
{
	string firstName;
	string lastName;
	int phoneNumber;
	firstName = "ryan";
	lastName = "ryanson";
	phoneNumber = 1234567;	
	
	
	
	cout << "Please enter first name." << endl;
	cin >> firstName;
	cout << "Please enter last name." << endl;
	cin >> lastName;
	cout << "please enter phone number (example 2101234567)" << endl;
	cin >> phoneNumber;
	
	cout << "\n" <<firstName << "\n"<<lastName<< "\n"<<phoneNumber << endl;
	
	
	
	return 0;
}
