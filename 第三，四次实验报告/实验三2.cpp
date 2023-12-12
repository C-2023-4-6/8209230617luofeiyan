#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num > 1) {
		int x = num - 1;
		for (; x >= 1; x--) {                  //x是除了本身外最大的因数
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
	int k = 1;    //从1开始循环；
	int j = 0;     //出现的素数个数；
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