//��10��ѧ���ɼ���ƽ��ֵ,��ͳ�Ʋ����������
//ͨ��������õķ�����������
#include <iostream>

using namespace  std;

typedef double array[12];		//�Զ��������ʶ��array

void avecount(array& b, int n)	 //һ������ʹ������,һ������ʹ�ö���
{
	double ave(0);
	int count(0);				//�ۼ�����ʼ��0
	for(int j = 0; j < n - 2; j++) {
		ave = ave + b[j];
		if (b[j] < 60) count++;
	}
	b[n-2] = ave/(n -2);   //����ƽ���ɼ�
	b[n-1] = count;        //���벻��������
}

void main_3_5() {
	array b = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
	array &a = b;          //�����������
	avecount(a, 12);       //���ú�������ͳ��
	cout << "ƽ����ΪΪ:" << a[10] <<"��,������������" << int(a[11]) << "�ˡ�" << endl;
}
