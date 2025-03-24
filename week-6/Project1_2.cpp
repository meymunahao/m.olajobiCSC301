#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	
	stack<string> elementStack;
	
	elementStack.push("Stack Overflow.");
	elementStack.pop("Stack Overflow.");
	elementStack.peek("Stack is empty.");
		
	return 0;
}