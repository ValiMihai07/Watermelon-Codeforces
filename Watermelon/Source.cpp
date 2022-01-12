#include <iostream>
using namespace std;

int main()
{
	int kg;
	cin >> kg;
	if (kg == 2)
	{
		cout << "NO";
	}
	else if (kg % 2 == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;

}