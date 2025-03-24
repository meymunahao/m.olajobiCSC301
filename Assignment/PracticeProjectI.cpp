#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
using namespace std;

void welcome() {
	char U, A, r;	
    cout << "Hello!\nWelcome to this offline robust application used to keep track of all events happening on PAU campus."<< endl << endl;
	cout <<	"Are you a user (U) or an admin (A)? (U/A)" << endl;
	cin >> r;
}

void welcome2() {
	char r, e, s;
	if (r == 'U' & r == 'u')
		cout << "What would you like to do?" << endl;
		cout << "A. Register for events" << endl;
		cout << "B. Undo/Redo operations for participant registrations" << endl;
		cout << "C. Search for events by (name/ID)" << endl;
		cout << "D. View displayed event details including participant's and schedule" << endl;
		cin >> e;
			switch(e){
				case 'A':
				  addRegister();
					break;
				case 'B':
					cout << "Very Good!" << endl;
					break;
				case 'C':
					cout << "Well done" << endl;
					break;
				case 'D':
					cout << "You passed" << endl;
					break;
				default:
					cout << "Invalid input" << endl;
			}
	else if (r == 'A' && r == 'a')
		cout << "What would you like to do?" << endl;
		cout << "A. Create, View, Update or Delete Events" << endl;
		cout << "B. Undo/Redo operations for event updates" << endl;
		cout << "C. View generated report (of: 1. list of events and their participants, 2. event schedules, 3. check-in statistics)" << endl;
		cin >> s;
			switch(s){
				case 'A':
				  addRegister();
					break;
				case 'B':
					cout << "Very Good!" << endl;
					break;
				case 'C':
					cout << "Well done" << endl;
					break;
				case 'D':
					cout << "You passed" << endl;
					break;
				default:
					cout << "Invalid input" << endl;
			}
	else
		cout << "Wrong input. Please try again." << endl;
}

int main(){
	
	welcome();
	welcome2();
	
	return 0;
}