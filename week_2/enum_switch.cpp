#include <iostream>
using namespace std;
int main()
{
    enum Bolor
	{
		bed,
		bellow,
		breen
	};
	Bolor bolorEnum = bellow;
	switch (bolorEnum)
	{
	case bed:
		cout << "YamateKudasai!\n";
		break;
	case bellow:
		cout << "Yukkuri!\n";
		break;
	case breen:
		cout << "MottoHayaku!\n";
		break;
	default:
		cout << "Yaritakunai!\n";
		break;
	}
}
