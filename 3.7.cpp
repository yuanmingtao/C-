/*使用const保护数据*/
//不允许改变作为参数传递的字符串内容
#include<iostream>

#include<string>
using namespace std;
void change(const string &);

void main_3_7() {
	string str("Can you change it?");
	change(str);
	cout << str << endl;
}

void change(const string &s)
{
	string s2 = s + " NO!";
	cout << s2 << endl;
}