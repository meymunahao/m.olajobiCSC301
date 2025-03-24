#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
	queue<string> ticketQueue;
	
	bookStack.push("Data Structure");
	bookStack.push("Operating System");
	bookStack.push("Object-Oriented Programming");
	bookStack.push("Computer Programming 1");
	
	cout << "Removing books from the stack in reverse order they were added: " << endl;
	
	while (!bookStack.empty()){
		cout << "Removing \"" << bookStack.top() << "\" from the stack. " << endl;
		bookStack.pop();
	}
	return 0;
}