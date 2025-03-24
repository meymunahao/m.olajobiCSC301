#include <iostream>
using namespace std;

int main(){
	int arr[5] = {7, 13, 15, 17, 19};
	int size = 5;
	int index, value;
	
	cout << "Enter the index of the element you want to update: ";
	cin >> index;
	cout << "Enter the new value: ";
	cin >> value;
	
	if (index < 0 || index >= size){
		cout << "Invalid index." << endl;
		return 0;
	}
	
	arr[index] = value;
	
	cout << "Element updated successfully." <, endl;
	cout << "New array elements: ";
	for (int i=0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}