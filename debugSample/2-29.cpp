//�ڳ����ж���һ�����ͱ���������1��100��ֵ��Ҫ���û�����������Ƚ��������Ĵ�С���ѽ����ʾ���û���ֱ���Ŷ�Ϊֹ��
#include<iostream>
#include<ctime>
using namespace std;

int main229() {
	srand((unsigned int)time(NULL));

	int num1 = rand() % 100 + 1;//����һ�������	
	int num2;
	cout << "������һ����" << endl;
	
	while (1) 
	{		
		cin >> num2;
		if (num1 > num2)
		{
			cout << "�µĹ�С" << endl;

		}
		else if (num1 < num2)
		{
			cout << "�µĹ���" << endl;
		}
		else
		{
			cout << "��ϲ������" << endl;
			break;
		}

	}
	

	return 0;
}