#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void mytime(int myhour, int myminute, int mysec) {
		cout << "请输入时间：";
		cin >> myhour >> myminute >> mysec;
		if ((myhour <= 24 && myhour >= 0) && (myminute <= 60 && myminute >= 0) && (mysec <= 60 && mysec >= 0)) {
			hour = myhour;
			minute = myminute;
			sec = mysec;
		}
		else {
			cout << "你输入的时间有误，请重新输入" << endl;
		}
	}
	void showtime() {
		cout << "你输入的时间为：";
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;           //定义t1为Time类对象
	int hour=0, minute=0, sec=0;
	t1.mytime(hour, minute, sec);  //输入设定的时间 
	t1.showtime();
	return 0;
}