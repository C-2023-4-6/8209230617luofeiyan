#include<iostream>
using namespace std;
int main() {
	double a = 0; 
	double b = 0;
	double c = 0;
	cout << "请输入三边的长:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c&&a+c>b&&b+c>a) {
		double d = (a + b + c);
		cout << "三角形的周长是：" << d << endl;
		if(a==b||a==c||b==c){
			cout << "此三角形为等腰三角形" << endl;

		}
		else {

			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "此三边无法构成三角形，请重试。" << endl;
	}
	return  0;
}