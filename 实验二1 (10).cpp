#include<iostream>
#include<cmath>
using namespace std;
/*long long normalpower(long long base, long long power) {
	long long result = 1;
	for (int i = 1; i <= power; i++) {
		result = result * base;
	}
	return result;
}*/
int main() {
	const double price = 0.8;
	double w = 0;
	int day = 0;
	for (int num = 2; num <= 100;) {
		double sum = (price * num);
		num = (num * 2);
		w = w + sum;
		day = ++day;
	}
	cout << "�ܽ�" << w <<'\n' << "day:" << day << '\n' << "���ۣ�" << (w / day) << endl;
/*	long long base, power;
	cout << "�����������ָ��" << endl;
	cin >> base >> power;
	cout << "base=" << base << "power=" << power <<"normalpower=" << normalpower(base, power) << endl;*/
	return 0;
}