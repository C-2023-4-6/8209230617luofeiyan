#include<iostream>
using namespace std;
int main() {
	double x = 0;
	cout << "������x��ֵ��" << endl;
	cin >> x;
	double y = 0;
	if (0 < x&&x < 10) {
		if (0 < x &&x<1) {
			y = (3 - (2 * x));
			cout << "yΪ��" << y << endl;
		}
		else if (1 <= x &&x< 5) {
			y = (0.5 / x + 1);
			cout << "yΪ��" << y << endl;
		}
		else {
			y = (x * x);
			cout << "yΪ��" << y << endl;
		}
	}
	else {
		cout << "����������x��ֵ��" << endl;
	}
	return 0;
}
