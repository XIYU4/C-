#include <iostream>
#include <bitset>
using namespace std;
int main15()
{
	cout << "~15 = " << (~15) << endl;
	cout << "15 & 21 = " << (15 & 21) << endl;
	cout << "15 ^ 21 = " << (15 ^ 21) << endl;
	cout << "15 | 21 = " << (15 | 21) << endl;
	unsigned int nTest = 9;
	cout << "nTest = " << nTest << endl;
	nTest |= 1 << 4; //����4λ��Ϊ1
	cout << "After set the position 4 to 1, nTest = " << nTest << endl;
	
	nTest &= ~(1 << 4); //����4λ��0
	cout << "After set the position 4 to 0, nTest = " << nTest << endl;
	bool nFlag;
	for (int i = 0; i < 16; i++) { //ʵ�ַ�ת
		nFlag = nTest & (1 << i);
		if (nFlag) {
			nTest &= ~(1 << i);
		}
		else {
			nTest |= 1 << i;
		}
	}
	cout << "After flip, nTest = " << nTest << endl;
	return 0;
}