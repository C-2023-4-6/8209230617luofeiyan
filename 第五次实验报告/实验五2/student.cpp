//student.cpp                     �ڴ��ļ��н��к����Ķ���
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��"<<name << endl;
    cout << "sex��"<< sex << endl;
}
void Student::set_value(const char num1[],const char name1[], char sex1) {
    strcpy(this->num, num1);
    strcpy(this->name, name1);
    this->sex, sex1;
	sex = sex1;
}