#include<iostream>
using namespace std;
int main() {
	double a = 0; 
	double b = 0;
	double c = 0;
	cout << "���������ߵĳ�:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c&&a+c>b&&b+c>a) {
		double d = (a + b + c);
		cout << "�����ε��ܳ��ǣ�" << d << endl;
		if(a==b||a==c||b==c){
			cout << "��������Ϊ����������" << endl;

		}
		else {

			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�������޷����������Σ������ԡ�" << endl;
	}
	return  0;
}