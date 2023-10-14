//在程序中定义一个整型变量，赋以一到一百的值，要求用户猜这个数，比较两个数的大小，把结果提示给用户，直到猜对为止。

#include<iostream>
#include<ctime>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int num1 = rand() % 100 + 1;
	int num2 = 1;
	cout << "请输入一个数字" << endl;
	
	do
	{
		cin >> num2;
		if (num1 > num2)
			cout << "猜的小了" << endl;
		else if (num1 < num2)
			cout << "猜的大了" << endl;
		else
			cout << "恭喜你猜对了" << endl;

	} while (num1 != num2);


		return 0;


}
