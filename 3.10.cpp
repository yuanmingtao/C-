/*���ض���ĺ���*/

#include<iostream>
#include<string>
using namespace std;
string input(const int);			//��������string���͵ĺ���

void main_3_10() {
	int n;
	cout << "Input n = ";
	cin >> n;					    //����Ҫ������ַ�������
	string str = input(n);	
	cout << str << endl;
}

string input(const int n)
{

	string s1, s2;					//��������string��Ķ���(��Ϊ�մ�)
	for (int i = 0; i < n; i++)		//����n���ַ���
	{
		cin >> s1;
		s2 = s2 + s1 + " ";			//�����յ��ַ������
	}
	return s2;						//����string����
}
