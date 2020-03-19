//Arithmetic Calculator PEMDAS via Recursion
#include <iostream>
#include <iomanip>
using namespace std;

int mulRec(int a, int b) {
	if (a == 0 || b == 0)
		return 0;
	else
		return a + mulRec(a, b-1);
}
int divRec(int a, int b) {
	if (b == 0) {
		cout << "Cannot divide by 0";
		exit(-1);
	}
	if (a == 0)
		return 0;
	if (a == b)
		return 1;
	if (a < b)
		return 0;
	else
		return 1 + divRec(a-b, b);
}


int main() {
	int choice;
	int input1 = 0, input2 = 0;

	cout << "Welcom to the Arithmetic Caculator" << endl;

	do {
		cout << "Select an option: " << endl << endl;
		cout << "1. Multiplication" << endl;
		cout << "2. Division" << endl;
		cout << "3. Addition" << endl;
		cout << "4. Subtraction" << endl;
		cout << "-1. Quit" << endl;

		cin >> choice;
		
		switch (choice) {
		case 1:
			cout << "Multiplication" << endl << endl;
			cout << "Enter your numbers: ";
			cin >> input1 >> input2;
			cout << mulRec(input1, input2) << endl;
			break;
		case 2:
			cout << "Divisionn" << endl << endl;
			cout << "Enter your numbers: (First number / Second Number) ";
			cin >> input1 >> input2;
			cout << divRec(input1, input2) << endl;
			break;
		case 3:
			cout << "Addition" << endl << endl;
			cout << "Enter your numbers: ";
			cin >> input1 >> input2;
			cout << input1 + input2 << endl;
			break;
		case 4:
			cout << "Subtraction" << endl;
			cout << "Enter your numbers: ";
			cin >> input1 >> input2;
			cout << input1 - input2;
			break;
		case -1:
			exit(-1);
		default:
			cout << "Invalid option...\n";
			break;
		} 


	} while (1 <= choice <= 4);
	
	return 0;
}
