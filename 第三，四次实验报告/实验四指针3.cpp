#include<iostream>
using namespace std;
void arrange(int s1[], int size) {
	int temp;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (s1[i] > s1[i + 1]) {
				temp = s1[i];
				s1[i] = s1[i + 1];
				s1[i + 1] = temp;
			}
		}
	}
}

int main() {
	int size,a;
	cout << "请输入数组元素个数：";
	cin >> size;
	int * s1 = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(s1 + i);
	}
	cout << "动态调试" << endl;
	cout << "请输入你想要的数组" << endl;
	cin >> a;
	cout << "s1[" << a - 1 << "]=" << s1[a-1] << endl;
	arrange(s1, size);
	for (int i = 0; i < size; i++) {
		cout << s1[i] << "  ";
	}
	return 0;
}