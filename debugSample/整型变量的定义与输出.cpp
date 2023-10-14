//无符号数unsigned short取值范围为0到65535；
//有符号数short的取值范围为-32768到32767；
//如果超出数值类型的取值范围，则会出现数值溢出
#include<iostream>
using namespace std;
int main5()
{
	short int i;
	unsigned short int j;
	j = 50000;
	i = j;
	cout << "Short int is : "<< i << endl;
	cout << "Short unsigned int is :" << j << endl;
	return 0;
}