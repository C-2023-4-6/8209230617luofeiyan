#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	/*int a, b;
	a = 1;
	while (a <= 5) {
		b = 1;
		while (b <= a) {
			cout << "*" << endl;
			b++;
		}
		cout << "\n" << endl;
		a++;
	}*/
	for (int i = 1; i <=5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
		return 0;
}