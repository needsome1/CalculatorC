

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
	char operand;
	double first;
	double second;
	string res = "Result is: ";
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	cout << "Enter operand: ";
	cin >> operand;
	switch (operand)
	{
	case '+':
		cout << res << first + second << endl;
		break;

	case '-':
		cout << res << first - second << endl;
		break;

	case '*':
		cout << res << first * second << endl;
		break;
	case'/':
		cout << res << first / second << endl;
		break;

	default: 
		cout << "Unknown operation" << endl;
		break;

	}
	
	
	

	


    

}
