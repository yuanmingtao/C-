#include <iostream>
#include <string>
using namespace std;

void main_2_8()
{
	string str1("We are here! ");
	string str2 = "Where are you? ";
	cout << str1[0] << str1[11] << "," << str1 << endl;
	cout << str2[0] << str2[13] << "," << str2 << endl;
	cout << "please inout a word:";
	cin >> str1;
	cout << "length of the " << str1 << " is " << str1.size() << endl;
}