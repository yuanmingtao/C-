#include < iostream >
using namespace std;
class Point {
	private:
		double x, y;						 //类 Point 的数据成员
	public:
		Point() {};  						 //类 Point 的无参数构造函数
		Point(double a, double b)		     //具有两个参数的构造函数
		{
			x = a;
			y = b;
		}
		void Setxy(double a, double b)		//成员函数 , 用来重来设置数据成员
		{
			x = a;
			y = b;
		}
		void Display()						//成员函数 , 按指定格式输出数据成员的值
		{
			cout << x << "\t" << y << endl;
		}
};

void main_2_4()
{
	Point a;								//定义类 Point 的对象 a
	Point b(18.5, 10.6);					//定义类 Point 的对象 b 并初始化
	a.Setxy(10.6, 18.5);					//为对象 a 的数据成员赋值
	a.Display();							//显示对象 a 的数据成员
	b.Display();						    //显示对象 b 的数据成员
}