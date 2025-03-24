// IF STATEMENT

#include <iostream>
using namespace std;

int main() {
	for (int n = 10; n > 0; n--){
		if (n == 5) break;
		cout << n << ", ";
	}
	cout << "End of the loop\n";
	
	return 0;

}

//IF ELSE STATEMENT
#include <iostream>
using namespace std;
int a = 6;

int main() {
	if (a== 5)
		cout << "a is equal to 5" << endl;
	else 
		cout << "a is not equal to 5" << endl;
		
	return 0;
}


//ELSE  IF STATEMENT
#include <iostream>
using namespace std;
int score = 40;

int main() {
	if (score >= 70)
		cout << "Grade A" << endl;
	else if (score >= 60)
		cout << "Grade B" << endl;
	else if (score >= 50)
		cout << "Grade C" << endl;
	else if (score >= 40)
		cout << "Grade D" << endl;
	else
		cout << "Grade F" << endl;
		
		
		
	return 0;
}

//NESTED IF STATEMENT
#include <iostream>
using namespace std;
int a = 40;
int b = 30;

int main() {
	if (a== 40){
		if (b < 12)
			cout << "A is equal to 40 and b is less than 12" << endl;
		else
			cout << "A is equal to 40 and b is greater than 12" << endl;
		
	}
	
	else {
		
		cout << "A is not equal to 40" << endl;
	}
		
	return 0;
}

//WHILE LOOP
#include <iostream>
using namespace std;
int main() {
	int a = 25;
	int b = 20;
	while (b < a)  {
		b++;
		cout << b /* b++ */ << endl;
	}
	return 0;
}

//DO WHILE LOOP
#include <iostream>
using namespace std;
int main() {
	int a = 25;
	int b = 20;
	do  {
		b++;
		cout << b << endl; 
	} while (b > a);
	return 0;
}

//FOR LOOP 1
#include <iostream>
using namespace std;
int main() {
	int j; // define loop variable
	for (j= 0; j<15; j++) //loop from 0 to 14
		cout  << j*j << endl; //displaying the square of j
	cout << endl;
	return 0;
}

//FOR LOOP 2
// A Class activity of displaying multiples of 2

#include <iostream>
using namespace std;
int main() {
	int m; // define loop variable
	for (m= 0; m<60; m++) //loop from 0 to 60
		cout  << m*2 << endl; //displaying the multiples of 2
	cout << endl;
	return 0;
}

//FOR LOOP 3
// A Class activity of creating nested for loops

#include <iostream>
using namespace std;
int main() {
	int m; 
	for (m=1; m<13; m++) {
		for (m=1; m<13; m++) {
			for (m=1; m<13; m++)
				cout  << "3 * " << m << " = " << m * 2 << "\n";
		}
			
	}	
	return 0;

}

//FOR LOOP 4
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 1; i < 13; i++) {
		for (int j = 1; j<= n; j++) {
			cout << i << " X "<< j <<" = "<< i * j << "\t";
		}
		cout << endl;
	}
}

//CONTINUE STATEMENT
#include <iostream>
using namespace std;

int main() {
	for (int n = 10; n > 0; n--){
		if (n == 5) 
		//break;
		continue;
		
		cout << n << ", ";
	}
	cout << "\nEnd of the loop\n";
	
	return 0;

}

//SWITCH STATEMENT
#include <iostream>
using namespace std;

int main() {
	char grade = 'A';
	
	switch(grade){
		case 'A':
			cout << "Excellent!" << endl;
			// break;
		case 'B':
			cout << "Very Good!" << endl;
			break;
		case 'C':
			cout << "Well done" << endl;
			break;
		case 'D':
			cout << "You passed" << endl;
			break;
		case 'F':
			cout << "Better try again" << endl;
			break;
		default:
			cout << "Invalid grade" << endl;
	}
		
				
	return 0;
}

//GO TO STATEMENT
#include <iostream>
using namespace std;

int main() {
	int n = 10;
loop:
	cout << n << ", ";
	n--;
	if (n > 0) goto loop; // for an unending loop, use just 'goto loop;'
	cout << "End of loop!\n";
	
	return 0;

}

//STRING CLASS IN STANDARD C++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string university = "PAU";
	cout << university << endl;
	
	return 0;
}

//C-STYLE CHARACTER STRING
#include <iostream>
using namespace std;

int main() {
	char university[3] = {'P', 'A', 'U'};
	cout << university << endl;
	
	return 0;
}
