#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num > 1) {
		int x = num - 1;
		for (; x >= 1; x--) {                  //x�ǳ��˱�������������
			if ((num % x) == 0)
			{
				break;
			}
		}
		char t;
		if (x != 1) {
			t = false;
		}
		if (x == 1) {
			t = true;
		}
		return t;
	}
	else {
		return false;
	}
}
int main() {
	int k = 1;    //��1��ʼѭ����
	int j = 0;     //���ֵ�����������
	for (; j <= 199; k++) {
		int t = is_prime(k);
		if (t == 1) {
			cout << k<<' ';
			j++;
			if (j % 10 == 0) { cout << endl; }
		}
		
	}
	return 0;
}