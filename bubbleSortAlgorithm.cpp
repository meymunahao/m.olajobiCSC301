#include <iostream>

using namespace std;

void print(int a[], int n){
	int i;
	for (i=0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[], int n){
	int i, j, temp;
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout << "Sorting\n";
		print (a,n);
	}
}

int main(){
	int i, j, temp;
	int a[5] = {8, 2, 4, 9, 5};	
	int n = sizeof(a)/sizeof(a[0]);
	cout << "Before sorting array elements are: \n";
	print (a, n);
	
	bubbleSort(a, n);
	cout << "\nAfter sorting array elements are: \n";
	print(a, n);
	
	return 0;
}