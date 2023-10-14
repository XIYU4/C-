//在程序中定义一个整型变量，赋以1到100的值，要求用户猜这个数，比较两个数的大小，把结果提示给用户，直到才对为止。
#include<iostream>
#include<ctime>
using namespace std;

int main229() {
	srand((unsigned int)time(NULL));

	int num1 = rand() % 100 + 1;//生成一个随机数	
	int num2;
	cout << "请输入一个数" << endl;
	
	while (1) 
	{		
		cin >> num2;
		if (num1 > num2)
		{
			cout << "猜的过小" << endl;

		}
		else if (num1 < num2)
		{
			cout << "猜的过大" << endl;
		}
		else
		{
			cout << "恭喜你答对了" << endl;
			break;
		}

	}
	

	return 0;
}