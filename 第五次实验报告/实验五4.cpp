#include<iostream>
using namespace std;
class Person {
private:
	int sno;
	double score;
public:
	Person(int s, double sco) :sno(s), score(sco) {};     //定义一个对象数组
	void dispaly() {
		cout << "学号：" << sno << "分数：" << score << endl;
	}
	void max(Person * p,Person s[]) {
		Person* max =NULL;
		for (p = s; p < (s + 5); p++) {
			if (p->score < (p + 1)->score) {
				max = (p + 1);
			}
		}
		cout << max->sno << "  " << max->score << endl;
	}
};
int main() {
	Person s[5]={
		Person(1,90.5),
		Person(2,80),
		Person(3,85.5),
		Person(4,95.5),
		Person(5,89.5)
	};
	Person* p = NULL;
	s->max(p, s);
	return 0;
}