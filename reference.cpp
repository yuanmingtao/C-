//��ʾ���õ�����

#include<iostream>

using namespace std;

void error_example();	//����������������ʹ��˵��

typedef double array[10];
void array_ref();		//��ӽ��������������

void main_r()
{
	int  x = 56;	//���岢��ʼ�� x

	int& a = x;		//���� a �� x ������, a �� x �ĵ�ַ��ͬ 

	int& r = a;     //���� r �� a ������, r �� a �ĵ�ַ��ͬ,���� x �ĵ�ַҲ��ͬ
	
	error_example(); //�Ƿ����������˵��

	cout << "x = " << x << ", &x=" << &x <<" , a = " << a << " , &a= " << &a

		 << ", r = " << r << ", &r=" << &r << endl;

	r = 25;			//�ı� r,�� a �� x ��ͬ���仯

	cout << "x = " << x << ", &x=" << &x <<" , a = " << a << " , &a= " << &a

		 << ", r = " << r << ", &r=" << &r << endl;

}

void error_example()
{
	int x = 60;

	int& a = x;

	//int& & d = x;         //�������õ����� 
    //int * & r = &x;		//��������ָ���x������

	int *p = &x;
	int * & q = p;		    //������ָ�������

	int * r = &a;			//����ָ�����õ�ָ��
	array_ref();
	//cout << *r <<endl << p;	
	exit(0);
}

void array_ref()
{
	array a = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
	array &b = a;
	a[2] = 100;		//��������a
	for(int i = 0; i < 10; i++)
		cout << b[i] << " ";
	cout << endl;
}
