#include<iostream>
using namespace std;
#include"mytemperature.h"
int main() {
	double a;
	int n;
	cout << "����ת����������1������ת�����¶�������2��";
	cin >> n;
	if (n == 1) {
		cout << "�����������¶ȣ�";
		cin >> a;
		cout << "ת��Ϊ�����¶��ǣ�" << celsius_to_fah(a) << endl;
	}
	if (n == 2){
		cout<<"�����뻪���¶ȣ�";
		cin>>a;
		cout << "ת��Ϊ�����¶��ǣ�" << fahrenheit_to_cels(a) << endl;
	}
	return 0;
}