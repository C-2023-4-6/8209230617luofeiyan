#pragma once
//student.h(����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(const char[], const char[], char);
private:
	char num[20];
	char name[20];
	char sex;
};
