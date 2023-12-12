#include<iostream>
using namespace std;
bool f[100];
int main(){
	const int snum = 100;
	const int bnum = 100;
	for (int i = 0; i < 100; i++) {         //第一个学生打开
		f[i] = true;
	}
	for (int i = 1; i < 100; i++) {        //第i+1个学生  所以num是学生，每次改变都是从自己开始，然后每隔num个数改变
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