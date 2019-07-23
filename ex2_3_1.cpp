#include <iostream>
#include <string>
using namespace std;
void concat1(string str1, string str2);
void concat2(string str1, string str2);
void main2_3_1()
{
//	concat1("Hello", ", World");
    concat2("Hello", ", World");
}

void concat1(string str1, string str2)
{
	string str3 = str1 + str2;
	cout << str3 << endl;
}

void concat2(string str1, string str2)
{

	//int i = 0, j = 0;
	//string str(str1);
    //copy(str1.begin(), str1.end(), str);

//	cout << str << endl;
}