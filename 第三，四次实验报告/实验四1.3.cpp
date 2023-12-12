#include<iostream>
int a1[10];
int a2[1000];
using namespace std;
int main(){
	cout << "please input ten numbers:";
	cin >> a1[0];
	int num = 1;
	int x;
	for (int i = 1; i < 10; i++) {
		cin >> x;
		if (!a2[x]) {
			a1[num] = x; num++; a2[x]++;
		}
	}
	cout << "the distinct numbers are:";
	for (int i = 0; i < num; i++) {
		cout << a1[i] << " ";
	}
	return 0;
}
