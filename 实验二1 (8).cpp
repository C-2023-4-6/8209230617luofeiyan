#include<iostream>
using namespace std;
int main() {
	double x0, x1;
	float a;
	cout << "请输入a的数值：";
	cin >> a;
	x0 = a;
	x1 = (x0 +a/x0) / 2;
	while (fabs(x1 - x0) >= 1e-5) {
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	cout << "所求平方根：" << x1 << endl;
	return 0;
}