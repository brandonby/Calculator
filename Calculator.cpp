#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::showpoint;
using std::fixed;
using std::setprecision;


bool exit_func() {
	//intialize varaibles
	char user_input_exit;
	char y = 'y';
	
	cout << endl;
	cout << "Exit Y or N?: " << endl;
	
	cin >> user_input_exit;
	
	//compares both char and returns boolean
	if (user_input_exit == y) {
		return false;
	}
	else {
		return true;
	}
}

double square_root(double num) {
	//intialize varaibles
	double c_num;
	
	c_num = sqrt(num);

	cout << endl;
	cout << "sqrt(" << num << ") = "<< c_num << endl;
	
	return 0;
}

double reg_calc(double num1, double num2, string opera) {
	//computes with whatever operator user inputs
	if (opera == "+") {
		cout << "The two values added: " << num1 + num2 << endl;
	}
	if (opera == "-") {
		cout << "The two values subtracted: " << num1 - num2 << endl;
	}
	if (opera == "*") {
		cout << "The two values multiplied: " << num1 * num2 << endl;
	}
	if (opera == "/") {
		cout << "The two values divided: " << num1 / num2 << endl;
	}
	return 0;
}

double trig_calc(double num1, string opera) {
	//computes with whatever operator user inputs
	if (opera == "sin") {
		cout << fixed << std::showpoint << setprecision(2);
		cout << "Sine(" << num1 << ") = " << sin(num1) << endl;
	}
	else if (opera == "cos") {
		cout << fixed << std::showpoint << setprecision(2);
		cout << "Cosine(" << num1 << ") = " << cos(num1) << endl;
	}
	return 0;

}

int main() {
	//Declation of variables
	double num1;
	double num2;
	string user_input;
	string opera;

	//General use of program
	cout << "How to use the program" << endl;
	cout << endl;
	cout << "For trigonmetry: trig" << endl;
	cout << endl;
	cout << "For regualr arthemtic: reg" << endl;
	cout << endl;
	cout << "If you want to use the square root function: sqrt" << endl;
	cout << endl;

	do {
		cout << endl;
		cout << "What do you want to do: " << endl;
		cin >> user_input;

		if (user_input == "trig") {
			cout << endl;
			cout << "Enter a integer: " << endl;
			cin >> num1;
			
			cout << endl;
			cout << "Enter operation" << endl;
			cin >> opera;
			
			trig_calc(num1, opera);
		}
		else if (user_input == "reg") {
			cout << endl;
			cout << "Enter a integer: " << endl;
			cin >> num1; 

			cout << endl;
			cout << "Enter another integer" << endl;
			cin >> num2; 

			cout << endl;
			cout << "Enter operation" << endl;
			cin >> opera; 

			//Computation using users number and operation
			reg_calc(num1, num2, opera);
		}
		else if (user_input == "sqrt") {
			cout << endl;
			cout << "Enter a integer: " << endl;
			cin >> num1;

			square_root(num1);
		}
	} while (exit_func());
}
