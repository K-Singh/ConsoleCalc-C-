// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int op;
	int x;
	int mod;
	char end;
	cout << " Welcome to Kirat's Calculator! \n Enter a number! \n";
	cin >> a;
	cout << " Press 1 for addition! \n Press 2 for subtraction! \n Press 3 for multiplication! \n Press 4 for division! \n";
	cin >> op;
	cout << "Enter another number! \n";
	cin >> b;
	if (op == 1){
		x = a + b;
		mod = 0;
		cout << "The sum of your 2 numbers is " << x << "! \n";
	}
	else if (op == 2){
		x = a - b;
		mod = 1;
		cout << "The difference of your 2 numbers is " << x << "! \n";
	}
	else if (op == 3){
		x = a * b;
		mod = 0;
		cout << "The product of your 2 numbers is " << x << "! \n";
	}
	else if (op == 4){
		x = a / b;
		mod = a % b;
		if (mod > 0){
			cout << "The quotient of your 2 numbers is " << x << " with a remainder of " << mod << "! \n";
		}
		else{
			cout << "The quotient of your 2 numbers is " << x << "! \n";
		}
	}
	else {
		cout << "Uh oh! You didn't choose a valid operation! \n";
	}

	cout << "Please press anything to close the calculator! \n";
	cin >> end;
	

	return 0;
}





