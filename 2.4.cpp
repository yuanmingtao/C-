#include < iostream >
using namespace std;
class Point {
	private:
		double x, y;						 //�� Point �����ݳ�Ա
	public:
		Point() {};  						 //�� Point ���޲������캯��
		Point(double a, double b)		     //�������������Ĺ��캯��
		{
			x = a;
			y = b;
		}
		void Setxy(double a, double b)		//��Ա���� , ���������������ݳ�Ա
		{
			x = a;
			y = b;
		}
		void Display()						//��Ա���� , ��ָ����ʽ������ݳ�Ա��ֵ
		{
			cout << x << "\t" << y << endl;
		}
};

void main_2_4()
{
	Point a;								//������ Point �Ķ��� a
	Point b(18.5, 10.6);					//������ Point �Ķ��� b ����ʼ��
	a.Setxy(10.6, 18.5);					//Ϊ���� a �����ݳ�Ա��ֵ
	a.Display();							//��ʾ���� a �����ݳ�Ա
	b.Display();						    //��ʾ���� b �����ݳ�Ա
}