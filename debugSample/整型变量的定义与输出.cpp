//�޷�����unsigned shortȡֵ��ΧΪ0��65535��
//�з�����short��ȡֵ��ΧΪ-32768��32767��
//���������ֵ���͵�ȡֵ��Χ����������ֵ���
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