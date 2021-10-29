#include<iostream>
#include<ctime>
using namespace std;
int f(int n)
{
	if (n == 1)
	{
		return 1;
    }
	if (n % 2 == 0)
		return 2 * f(n / 2) - 1;
	else
		return 2 * f(n / 2) + 1;
}
int main()
{
	int n;
	cout << "n = "; cin >> n;
	cout << "x = " << f(n) << endl;
	while (true)
	{
		n = f(n);
		if (n == f(n))
		{
			cout << "y = " << f(n) << endl;
			break;
		}
	}
	return 0;
}