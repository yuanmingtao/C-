/*  功能:将结构对象的两个域值相加,乘以2再加50  */

#include <iostream>      //包含头文件
using namespace std;     //使用命名空间

int result(int, int);    //result函数的原型声明
//const int k = 2;         //定义常量

//const int k(2);          //定义常量并使用构造函数方法初始化
#define k 2                //k只是一个名字,并不占用存储空间,存在类型问题
extern const int d;        //外部变量d

struct Point{            //定义结构Point
	int x,y;			 //定义结构成员x和y
};
                        
int main1()               //主程序
{
		                 //主程序开始
	int z(0), b(50);     //初始化整数对象(构造函数语法)

	Point a;                                //定义结构对象a
	cout << "输入两个整数(以空格区分):";    //输出提示信息
	cin >> a.x >> a.y;                      //接受输入数值
	z = (a.x + a.y) * k;                    //计算结果
	z = result(z, b);                       //计算结果
	cout << "计算结果如下:" << endl;        //输出提示信息
	cout << "(("  << a.x << " + " << a.y    //输出信息
		 << ") *" << k << ") +" << b      //输出信息
		 << "=" << z                        //输出结果
		 << endl;                           //换行
	return 0;                               //主函数main的返回值
}                                           //主函数结束

//***************************
//* 函  数:result			*
//* 参  数:整型对象 a 和 b  *
//* 返回值:整型对象         *
//***************************
int result(int a, int b)
{
	return a + b;                       //返回a + b
}
