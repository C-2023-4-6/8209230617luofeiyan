#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f = 0;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> f;
	double t = (f - 32) * 5 / 9;
	cout << "�����¶��ǣ�" << setprecision(4)<<t << endl;
	return 0;
}