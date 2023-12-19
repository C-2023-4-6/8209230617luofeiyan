#include<iostream>
using namespace std;
class cube {
private:
	double weight, height, length, v;
public:
	void pro() {
		cout << "请分别输入立方体的长宽高：";
		cin >> length >> weight >> height;
	}
	void  vo() {
		v = (weight * height * length);
	}
	void vv() {
		cout << "立方体的体积是：" << v << endl;
	}
};
int main() {
	cube cu1, cu2, cu3;
	cu1.pro();
	cu1.vo();
	cu1.vv();
	cu2.pro();
	cu2.vo();
	cu2.vv();
	cu3.pro();
	cu3.vo();
	cu3.vv();
	return 0;
}