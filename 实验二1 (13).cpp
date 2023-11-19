#include<iostream>
using namespace std;
int main() {
	char c;
	int letter = 0, space = 0, dight = 0, others = 0;//字母，空格，数字和其他
	while ((c=cin.get())!='\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else if (c >= '0' && c <= '9')
			dight++;
		else if (c == ' ')
			space++;
		else others++;
	
	}
	cout << "字母有多少个：" << letter << endl;
	cout << "数字有多少个：" << dight << endl;
	cout << "空格有多少个：" << space << endl;
	cout << "其他有多少个：" << others << endl;
	return 0;
}