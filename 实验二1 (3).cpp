#include<iostream>
using namespace std;
int main() {
	double r = 0;                      //rΪԲ׶�ĵ���뾶
	cout << "������Բ׶�ĵ���뾶��" << endl;
	cin >> r;

	double pai = 3.14159;              //paiΪԲ����
	double s = pai * r * r;
	cout << "Բ׶��������ǣ�" << s << endl;
	
    double h = 0;                     //hΪԲ׶�ĸ�
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> h;

	double v = 0;                    //v��Բ׶�����
	v = (s*h/3);
	cout << "Բ׶������ǣ�" << v<<endl;
	
    return 0;
}