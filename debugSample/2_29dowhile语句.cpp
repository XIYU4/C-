#include<iostream>
#include<ctime>
using namespace std;

int main() {

	srand((unsigned int)time(NULL));
	int num1 = rand() % 100 + 1;
	int num2 ;
	cout << "������һ������" << endl;
	cin >> num2;
	do
	{
		if(num1>num2)
		{
			cout << "�µ�С��" << endl;
		}
		if (num1 < num2)
		{
			cout << "�µĴ���" << endl;
		}
	} while (num2 != num1);
		return 0;
}