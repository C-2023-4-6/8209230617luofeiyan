#include<iostream>
using namespace std;
int main() {
	double a;            //a�ǳ�ʼֵ
	cout << "�������ʼֵ��";
	cin >> a;
	int n = 0;            //n��ѭ������
	cout << "������ѭ��������";
	cin >> n;
	for (; n >= 1; n--) {
		a = (2*a +1);
	}
	cout << a << endl;
	return 0;
}