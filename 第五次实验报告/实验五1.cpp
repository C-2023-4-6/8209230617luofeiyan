#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void mytime(int myhour, int myminute, int mysec) {
		cout << "������ʱ�䣺";
		cin >> myhour >> myminute >> mysec;
		if ((myhour <= 24 && myhour >= 0) && (myminute <= 60 && myminute >= 0) && (mysec <= 60 && mysec >= 0)) {
			hour = myhour;
			minute = myminute;
			sec = mysec;
		}
		else {
			cout << "�������ʱ����������������" << endl;
		}
	}
	void showtime() {
		cout << "�������ʱ��Ϊ��";
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //����t1ΪTime�����
	int hour=0, minute=0, sec=0;
	t1.mytime(hour, minute, sec);  //�����趨��ʱ�� 
	t1.showtime();
	return 0;
}