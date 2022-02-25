#include <iostream>
using namespace std;
int main()
{
	string bollor{ "breen" };
	if (bollor == "bed")
	{
		cout << "YameteKudasai!\n";
	}
	else
	{
		cout << "Sugoi!2\n";
	}
	(bollor == "bed") ? cout << "YameteKudasai!\n": cout << "Sugoi1!\n";
}
