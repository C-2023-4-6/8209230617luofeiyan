#include<iostream>
using namespace std;
int main() {
	while (1) {
		double a = 0;
		double b = 0;
		cout << "������Ҫ�������������" << endl;
		cin >> a >> b;
		cout << "���Ҫ�ӷ���������0������1���˷�2������3��ȡ��4." << endl;
		int n = 0;
		cin >> n;

		double result = 0;
		switch (n) {
		case 0:
			result = a + b;
			cout << "����֮���ǣ�" << result << endl;
			break;
		case 1:
			result = a - b;
			cout << "����֮���ǣ�" << result << endl;
			break;
		case 2:
			result = a * b;
			cout << "����֮���ǣ�" << result << endl;
			break;
		case 3: {
			if (b != 0) {
				result = a / b;
				cout << "����֮���ǣ�" << result << endl;
				break;
			}
			else { cout << "����������Ϊ0�����������롣" << endl; }
			break;
		}
		case 4:
			int c, d;
			c = (int)a;
			d = (int)b;
			result = c % d;
			cout << "����ȡ���ǣ�" << result << endl;
			break;
		}
	}
		return 0;
	}
