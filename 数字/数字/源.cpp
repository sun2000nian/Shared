#include<iostream>
using namespace std;

int main()
{
	int x[10];
	cout << "2018115682-�����" << endl << endl;
	cout << "������10����" << endl;
	for (int temp = 0; temp < 10; temp++)
	{
		cin >> x[temp];
	}
	cout << "����֮��Ϊ7�����У�" << endl;
	for (int temp = 0, sum = 0; temp < 10; temp++)
	{
		for (int count = 1; count < 10e8; count*=10)
		{
			sum += x[temp] % (10 * count) / count;
		}
		if (sum == 7)
		{
			cout << x[temp]<<' ';
		}
		sum = 0;
	}
	system("pause");
}