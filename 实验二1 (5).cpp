#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;  //oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//oct
	cout << "ouput in char thpe:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" <<setprecision(4)<<static_cast<double>(testUnint) << endl;
	cout << "output in hex unsigned int type:" << hex<<testUnint<< endl;  //16进制
	cout << "output in oct int type:" <<oct<<testUnint<< endl; //8进制
	double a = 6.356;
	cout << (int)a << endl;
	system("pause");
	return 0;
}