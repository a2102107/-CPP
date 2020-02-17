#include<iostream>

using namespace std;

void test_1_9();
void test_1_10();
void test_1_11();
int main() {
	test_1_9(); test_1_10(); test_1_11();
	return 0;
}

void test_1_9() {
	int sum = 0;
	cout << "test 1.9" << endl;
	for (int i = 50; i <= 100; i++)
	{
		sum += i;
	}
	cout << "  " << sum;
	cout << endl;
}

void test_1_10() {
	cout << "test 1.10" << endl;
	for (int i = 10; i >= 0; --i)
	{
		cout << "  " << i;
	}
	cout << endl;
}

void test_1_11() {
	cout << "test 1.11" << endl;
	int v1, v2;
	cin >> v1 >> v2;
	for (int i = v1 + 1; i < v2; i++)
	{
		cout << "  " << i;
	}
	for (int i = v2 + 1; i < v1; i++)
	{
		cout << "  " << i;
	}
	cout << endl;
}