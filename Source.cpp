#include <iostream>
using namespace std;
int main()
{
	int num1, num2, result;
	char task;
	cout << "enter two numbers ->" << endl;
	cin >> num1;
	cin >> num2;
	cout << "choose one of the following (*) (/) (-) (+)" << endl;
	cin >> task;
	switch (task)
	{
	case '*':
		result = num1 * num2;
		cout << "your resul is -- " << result << endl;  
		break;
	case '/':
		result = num1 / num2;
		cout << "your resul is -- " << result<< endl;
		break;
	case '-':
		result = num1 - num2;
		cout << "your resul is -- " << result << endl;
		break;
	case '+':
		result = num1 + num2;
		cout << "your resul is -- " << result<< endl;
		break;
	default:
		cout << "unknown task";
	}



	return 0;
}