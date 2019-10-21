#include<iostream>
using namespace std;

inline int isnumber(char c) {return c>='0'&&c<='9' ? 1 : 0;}
void main_inline() {
	char c;
	cin>>c;
	if(isnumber(c)) cout<< "You entered a digit" << endl;
	else cout<< "Your entered a non-digit." << endl;
}
