#include <iostream>

int main()
{
	int v1, v2;
	using namespace std;
	cout << "ÊäÈë2¸öÊý×Ö£º" << endl;
	cin >> v1 >> v2;
	while (v1 < v2 - 1)
	{
		cout << ++v1 << endl;
	}
	while (v2 < v1 - 1)
	{
		cout << ++v2 << endl;
	}
	return 0;
}