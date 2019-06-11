#include < iostream >
using namespace std;

struct Point {
	private :
		double x, y;	//数据成员
	public :
		Point(){}	//无参数构造函数
		Point(double a, double b)
		{
			x = a;
			y = b;
		}
		void Setxy(double a, double b)	//成员函数，用来重新设置数据成员
		{
			x = a;
			y = b;
		}
		void Display()		//成员函数，按指定格式输出数据成员的值
		{
			cout << x << "\t" << y << endl;
		}
};

void main_2_3()
{
	Point a;				//定义对象 a
	Point b(18.5, 10.6);	//定义对象 b 并赋初值
	a.Setxy(10.6, 18.5);	//设置变量 a 的数据成员
	a.Display();			//显示变量 a 的数据成员
	b.Display();			//显示变量 b 的数据成员
}