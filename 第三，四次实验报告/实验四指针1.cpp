#include<iostream>               //s1�ǲ���s2�Ӵ�
#include<string>
using namespace std;
int indexOf(const char *s1, const char *s2) {
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	if (a <= b)
	{
		int t = -1;
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++)
			{
				if (s1[j] == s2[i]) {
					if (j == (a - 1)) {
						t = (i - j);
						break;
					}
				}
				else {
					break;
				}
				i++;
			}

		}
		return t;
	}
	else return -1;
}
int main() {
	const int size = 999;
	char *s1=new char[size], *s2=new char[size];
	cout << "Enter the first string:";
	cin.getline(s1, size);
	cout << "Enter the second string:";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	if (s1 != NULL) {delete[]s1;}
	if (s2 != NULL) {delete[]s2;}
	return 0;
}