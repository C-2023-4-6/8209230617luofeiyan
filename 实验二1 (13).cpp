#include<iostream>
using namespace std;
int main() {
	char c;
	int letter = 0, space = 0, dight = 0, others = 0;//��ĸ���ո����ֺ�����
	while ((c=cin.get())!='\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else if (c >= '0' && c <= '9')
			dight++;
		else if (c == ' ')
			space++;
		else others++;
	
	}
	cout << "��ĸ�ж��ٸ���" << letter << endl;
	cout << "�����ж��ٸ���" << dight << endl;
	cout << "�ո��ж��ٸ���" << space << endl;
	cout << "�����ж��ٸ���" << others << endl;
	return 0;
}