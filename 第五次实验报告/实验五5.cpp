#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	point(int x1=60,int y1=60) {
		x = x1;
		y = y1;
	}
	void setpoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "����Ϊ��(" << x << "," << y << ")" << endl;
	}
};
int main() {
	point po1;
	int i, j;
	cout << "��ֱ�����x��y�ı仯����";
	cin >> i >> j;
	po1.setpoint(i, j);
	po1.display();
	return 0;
}