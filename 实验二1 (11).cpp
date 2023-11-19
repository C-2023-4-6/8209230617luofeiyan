#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "请输入数字num1和num2：" << endl;
	cin >> num1 >> num2;
	int x = (num1 < num2 ? num1 : num2);
	for (; x >= 1; x--) {
		if (num1 % x == 0 && num2 % x == 0)
			break;
	}
	cout << "最大公约数是：" << x << endl;
	cout << "最大公倍数是：" << ((num1 * num2) / x) << endl;
	return 0;
}