//���ݵļ����������ʽ

//io_base��

//�ٿط������⺯�� 

/*
�� 1.1 �ٿط����京��
+-----------------------------+-----------------------------+----------------
    ����                      |	����	                    |  ����
+-----------------------------+-----------------------------+----------------
  dec                         |  ����תת����Ϊʮ����       |  ����/���
  oct                         |  ����תת����Ϊ�˽���       |  ����/���
  hex                         |  ����תת����Ϊʮ������     |  ����/��� 
+-----------------------------+-----------------------------+----------------
  endl                        |  ���һ�����з���ˢ����     |  ���
  resetiosflags(long flag)    |  ��� flag ָ���ı�־λ     |  ���
  setiosflags(long flag)      |  ���� flag ָ���ı�־λ     |  ���
  setfill(char ch)            |  ���� ch Ϊ����ַ�	        |  ���
  setprecision(int n)         |  ���ø������������ n       |  ���
  setw(int width)             |  ������������ֶο�� width |  ���
+-----------------------------+-----------------------------+-----------------

  �� 1.2 �������京��
+-----------------------------+----------------------------------------------
   ������                     |	����	                    
+-----------------------------+----------------------------------------------
  ios_base::left              |  ������ݰ��������߶������
  ios_base::right             |  ������ݰ�������ұ߶������
  ios_base::showpoint         |  �������ʱ�������һ��С����
  ios_base::showpos           |  ������ǰ���һ��" + "��
  ios_base::scientific        |  ʹ�ÿ�ѧ��������ʾ������
  ios_base::fixed             |  ʹ�ö�����ʽ��ʾ������
+-----------------------------+----------------------------------------------
*/

#include <iostream>

#include <iomanip>
using namespace std;

const double PI = 3.141592;

void first_ex();
void another_ex();
void last_ex();
void main_io()
{
	//first_ex();
	//another_ex();
	last_ex();
}

void first_ex()
{
	int a = 29, b = 1001;
	cout << a << setw(6) << b << endl;   //����b�����Ϊ6���
	cout << setw(6) << a << b << endl;   //setwֻ�Խ����ŵ��Ǹ�Ԫ����Ч
}

void another_ex()
{
	cout << PI << endl
	<< setprecision(0) << PI << endl   //�趨��ʾС��λ��(С����Ҳռ1λ) 0 ���ڲ��裬��ϵͳ����
	<< setprecision(1) << PI << endl   // 1 ������ʾ��������
	<< setprecision(2) << PI << endl   // 2 ��ʾС�������1λ(С����Ҳռ1λ)
	<< setprecision(3) << PI << endl  
	<< setprecision(7) << PI << endl; 
	
	int b = 100;
	cout << "Dec: " << dec << b << endl;   
	cout << "Hex: " << hex << b << endl;
	cout << "Oct: " << oct << b << 100 << endl;  //����������������Ϊ�˽��ƣ�ֱ�������ʽ

	cout << b << endl
		 << 100 << endl
		 << "Input b = ";

	cin >> b;
	cout << b << endl;
	cout << dec << setiosflags(ios_base::showpos) << b << endl;  //�ָ�ʮ���Ƹ�ʽ,����������ǰ�� +
	cout << "Input b = ";
	cin >> b;
	cout << b << endl;
	cout << resetiosflags(ios_base::showpos);   //�����ʽ 
	cout << b << endl;
}

void last_ex()
{
	cout << setfill('*')
		 << setw(0) << 15 << endl  //���n����ʾλ����,��������,��Ӱ����ʾ��ʹ������ַ�ʱ��n����ʾλ����1ʱ���ŷ����������
		 << setw(1) << 15 << endl
		 << setw(2) << 15 << endl
		 << setw(3) << 15 << endl
		 << setw(4) << 15 << endl;

	cout << setw(16) << setfill('*') << " " << endl;
	cout << setiosflags(ios_base::right)
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;

	cout << resetiosflags(ios_base::right);  //������ñ�־�󣬲��ܽ����µ�����
	cout << setiosflags(ios_base::left)
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;
}

