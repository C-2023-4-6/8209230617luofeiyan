#include<iostream>
using namespace std;
int main() {
	double r = 0;                      //r为圆锥的底面半径
	cout << "请输入圆锥的底面半径：" << endl;
	cin >> r;

	double pai = 3.14159;              //pai为圆周率
	double s = pai * r * r;
	cout << "圆锥底面面积是：" << s << endl;
	
    double h = 0;                     //h为圆锥的高
	cout << "请输入圆锥的高：" << endl;
	cin >> h;

	double v = 0;                    //v是圆锥的体积
	v = (s*h/3);
	cout << "圆锥的体积是：" << v<<endl;
	
    return 0;
}