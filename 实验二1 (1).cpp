#include<iostream>
#include<cctype>
using namespace std; 
int main() {
	char t;
	cin >> t;
	if (islower(t)) {
		cout << (char)toupper(t);
	}
	else cout << t + 1;

return 0;
}
