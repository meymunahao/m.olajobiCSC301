#include <iostream>

using namespace std;

void print(int a[], int n){
	int i;
	for (i=0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void selectionSort(int a[], int n){
	int i, j, small;
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				small = a[i];
				a[i] = a[j];
				a[j] = small;
			}
		}
		cout << "Sorting\n";
		print (a,n);
	}
}

int main(){
	int i, j, small;
	int a[8] = {4, 6, 5, 15, 9, 8, 1, 2};	
	int n = sizeof(a)/sizeof(a[0]);
	cout << "Before sorting array elements are: \n";
	print (a, n);
	
	selectionSort(a, n);
	cout << "\nAfter sorting array elements are: \n";
	print(a, n);
	
	return 0;
}