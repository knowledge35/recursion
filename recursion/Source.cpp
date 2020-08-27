#include <iostream>

using namespace std;



int factorialr(int n) {
	if (n==1)
	{
		return 1;
	}
	return n * factorialr(n - 1);
}
int main()
{
	cout << factorialr(5);
}