
//const�޶���ǿ�Ƹı����Ȩ��

#include <iostream>

using namespace std;

void main_const()
{
	//1.ָ������ָ�� *p������Ϊ��ֵ���и�ֵ

	const int y = 58;
	int x = 45;

	const int * p = &y;  //ָ������ָ��ָ���� y , y ������Ϊ��ֵ

	//*p = 45;   //*p���߱����� *p�ǳ���,���ܽ� *p��Ϊ��ֵ���в���	
	p = &x;      //������&�ı�ָ��ָ��

	const int *p1 = &x;
	
	x = 34;
	cout << *p1 << endl;

	//2.����ָ�� p������Ϊ��ֵ���и�ֵ

    int * const p2 = &x;
	
	//p2 = &y;   //�������� "p2" ����������ַ,���Բ�����Ϊ��ֵ
	
	 //p2 = &y;      //ָ������ָ�벻��ת���ɳ���ָ��
	
	*p2 = 56;
	cout << *p2 << endl;

	//3.ָ�����ĳ���ָ��  *p p�������ܸ�ֵ

	const int * const p3 = &x;
	//p3 = &y;
	//*p3 = 49;

	cout << *p3 << endl;
	
}