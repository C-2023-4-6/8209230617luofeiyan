#include<iostream>
using namespace std;
int main() {
	double x0, x1;
	float a;
	cout << "������a����ֵ��";
	cin >> a;
	x0 = a;
	x1 = (x0 +a/x0) / 2;
	while (fabs(x1 - x0) >= 1e-5) {
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	cout << "����ƽ������" << x1 << endl;
	return 0;
}