#include<iostream>
using namespace std;
int  zhan(int num1, int num2) {              //最大公约数
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0)
			break;
	}
	return x;
}
int  zhan1(int num1, int num2) {             //最小公倍数
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0)
			break;
	}
	int y = (num1 * num2) / x;
	return y;
}
int main() {
	cout << "请输入数字：" << endl;
	int a;
	int b;
	cin >> a >> b;
	int x=zhan(a,b); 
	int y = zhan1(a, b);
	cout << "最大公约数：" << x << endl;
	cout << "最小公倍数：" << y << endl;
	return 0;
}