/*ʹ��const��������*/
//������ı���Ϊ�������ݵ��ַ�������
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