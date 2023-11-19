#include<iostream>
using namespace std;
int main() {
	double x = 0;
	cout << "请输入x的值：" << endl;
	cin >> x;
	double y = 0;
	if (0 < x&&x < 10) {
		if (0 < x &&x<1) {
			y = (3 - (2 * x));
			cout << "y为：" << y << endl;
		}
		else if (1 <= x &&x< 5) {
			y = (0.5 / x + 1);
			cout << "y为：" << y << endl;
		}
		else {
			y = (x * x);
			cout << "y为：" << y << endl;
		}
	}
	else {
		cout << "请重新输入x的值。" << endl;
	}
	return 0;
}
