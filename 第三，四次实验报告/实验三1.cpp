#include<iostream>
using namespace std;
int  zhan(int num1, int num2) {              //���Լ��
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0)
			break;
	}
	return x;
}
int  zhan1(int num1, int num2) {             //��С������
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0)
			break;
	}
	int y = (num1 * num2) / x;
	return y;
}
int main() {
	cout << "���������֣�" << endl;
	int a;
	int b;
	cin >> a >> b;
	int x=zhan(a,b); 
	int y = zhan1(a, b);
	cout << "���Լ����" << x << endl;
	cout << "��С��������" << y << endl;
	return 0;
}