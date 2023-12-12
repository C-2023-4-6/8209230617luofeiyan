#include<iostream>
using namespace std;
int main() {
	double a;            //a是初始值
	cout << "请输入初始值：";
	cin >> a;
	int n = 0;            //n是循环次数
	cout << "请输入循环次数：";
	cin >> n;
	for (; n >= 1; n--) {
		a = (2*a +1);
	}
	cout << a << endl;
	return 0;
}