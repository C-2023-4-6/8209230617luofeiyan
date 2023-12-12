#include<iostream>
using namespace std;
const int size1 = 999;
int parseHex(const char* const hexString) {
	int a, sum = 0;
	a = strlen(hexString);
	int list[size1];
	for (int i = 0; i < a; i++) {
		if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			list[i] = (static_cast<int>(hexString[i] - 55) * pow(16, a - i - 1));
		}
		else {
			list[i] = ((hexString[i]-48) * pow(16, a - i - 1));
		}
		sum = list[i] + sum;
	}
	return sum;
}
	
int main() {
	char* hexString = new char[size1];
	cout << "please enter a hexadecimal number:";
	cin.getline(hexString, size1);
	cout << "the number " << hexString << " is " << parseHex(hexString) << endl;
	delete[]hexString;
	return 0;
}                                                                   