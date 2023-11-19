#include<iostream>
using namespace std;
int main() {
	while (1) {
		double a = 0;
		double b = 0;
		cout << "请输入要运算的两个数：" << endl;
		cin >> a >> b;
		cout << "如果要加法则请输入0，减法1，乘法2，除法3，取余4." << endl;
		int n = 0;
		cin >> n;

		double result = 0;
		switch (n) {
		case 0:
			result = a + b;
			cout << "两数之和是：" << result << endl;
			break;
		case 1:
			result = a - b;
			cout << "两数之差是：" << result << endl;
			break;
		case 2:
			result = a * b;
			cout << "两数之积是：" << result << endl;
			break;
		case 3: {
			if (b != 0) {
				result = a / b;
				cout << "两数之商是：" << result << endl;
				break;
			}
			else { cout << "被除数不能为0，请重新输入。" << endl; }
			break;
		}
		case 4:
			int c, d;
			c = (int)a;
			d = (int)b;
			result = c % d;
			cout << "两数取余是：" << result << endl;
			break;
		}
	}
		return 0;
	}
