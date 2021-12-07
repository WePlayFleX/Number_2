#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	cout << "Enter two number" << endl;
	cin >> a;
	cin >> b;
	if (a == b)
	{
		cout << "Numbers are equal" << endl;
	}
	else if (a < b)
	{
		cout << b << a << endl;
	}
	else if (a > b)
	{
		cout << b << a << endl;
	}
	system("pause");
	return 0;
}