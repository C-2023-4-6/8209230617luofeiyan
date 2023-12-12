#include<iostream>
using namespace std;
#include"mytemperature.h"
int main() {
	double a;
	int n;
	cout << "摄氏转华氏请输入1；华氏转摄氏温度请输入2：";
	cin >> n;
	if (n == 1) {
		cout << "请输入摄氏温度；";
		cin >> a;
		cout << "转化为华氏温度是：" << celsius_to_fah(a) << endl;
	}
	if (n == 2){
		cout<<"请输入华氏温度：";
		cin>>a;
		cout << "转化为摄氏温度是：" << fahrenheit_to_cels(a) << endl;
	}
	return 0;
}