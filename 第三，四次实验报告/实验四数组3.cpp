#include<iostream>
using namespace std;
bool f[100];
int main(){
	const int snum = 100;
	const int bnum = 100;
	for (int i = 0; i < 100; i++) {         //��һ��ѧ����
		f[i] = true;
	}
	for (int i = 1; i < 100; i++) {        //��i+1��ѧ��  ����num��ѧ����ÿ�θı䶼�Ǵ��Լ���ʼ��Ȼ��ÿ��num�����ı�
		for (int num = i; num < 100; num=(num+i+1)) {
			f[num] = !f[num];
		}
	}

	for (int i = 0; i < 100; i++) {
		if (f[i] == 1) {
			cout << i + 1 << "  ";
		}
	}

    return 0;
}