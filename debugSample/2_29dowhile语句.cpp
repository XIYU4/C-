#include<iostream>
#include<ctime>
using namespace std;

int main() {

	srand((unsigned int)time(NULL));
	int num1 = rand() % 100 + 1;
	int num2 ;
	cout << "请输入一个数字" << endl;
	cin >> num2;
	do
	{
		if(num1>num2)
		{
			cout << "猜的小了" << endl;
		}
		if (num1 < num2)
		{
			cout << "猜的大了" << endl;
		}
	} while (num2 != num1);
		return 0;
}