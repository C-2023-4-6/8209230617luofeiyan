#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f = 0;
	cout << "请输入华氏温度：" << endl;
	cin >> f;
	double t = (f - 32) * 5 / 9;
	cout << "摄氏温度是：" << setprecision(4)<<t << endl;
	return 0;
}