//����������
#include <iostream>

using namespace  std;

void swap(int []);	//�����β�ʹ�� "����[]"����ʽ

void main_3_3() {
	int a[] = {3,8};  //��������a
	swap(a);		  //����������a,Ҳ����ָ����
	cout << "���غ�: a = " << a[0] << " b = " << a[1] << endl;
}

void swap(int a[])		//������a,Ҳ����ָ������Ϊ��������
{
	int temp = a[0]; a[0] = a[1]; a[1] = temp;
	cout << "����Ϊ: a = " << a[0] << " b = " << a[1] << endl;
}