#include<iostream>
using namespace std;
const int num = 999;
int counts[26];
void  count(const char s[], int counts[]) {
	for (int i = 0; i <strlen(s); i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == ('a' + j)) {
				counts[j]++;
				break;
			}
			else if (s[i] == ('A' + j)) {
				counts[j]++;
				break;
			}
		}
	 }
}
int main() {           
	char s[num];               //×Ö·û´®
	cout << "Enter a string :";
	cin.getline(s, num);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << static_cast<char>(i + 'a') <<"£º" << counts[i] <<"  " << "times" << endl;
		}
	}
	return 0;
}