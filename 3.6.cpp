#include<iostream>
#include<string>
using namespace std;
void Display(string s1, string s2 = "", string s3 = "");

void main_3_6() {
	string str1("现在"), str2("过去"), str3("将来");
	Display(str1);   //现在
	Display(str1, str2, str3);  //现在  过去 将来
	Display(str3, str1);   //将来 现在
	Display(str2, str3);   //过去  将来
}

void Display(string s1, string s2, string s3)
{
	if (s2 == "" && s3 == "")			cout << s1 << endl;   
	else if (s3 == "" && s2 != "")		cout << s1 << "	、"<< s2 << endl;
	else								cout << s1 << "	、" << s2 << "	、" << s3 << endl;
}