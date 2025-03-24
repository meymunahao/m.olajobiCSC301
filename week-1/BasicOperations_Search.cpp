#include <iostream>
using namespace std;

int main(){
	int arr[5] = {7, 13, 15, 17, 19};
	int size = 5;
	int value;
	
	cout << "Enter the element you want to search for: ";
	cin >> value;
	
	for (int i=0; i<size; i++){
		if (arr[i] == value){
			cout << "Element found at index " << i << endl;
		}
	}
	
	cout << "Element not found in the array." << endl;
	return 0;
}