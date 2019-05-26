//演示引用的例子

#include<iostream>

using namespace std;

void error_example();	//声明常见错误引用使用说明

typedef double array[10];
void array_ref();		//间接建立对数组的引用

void main_r()
{
	int  x = 56;	//定义并初始化 x

	int& a = x;		//声明 a 是 x 的引用, a 和 x 的地址相同 

	int& r = a;     //声明 r 是 a 的引用, r 和 a 的地址相同,即和 x 的地址也相同
	
	error_example(); //是否开启错误调试说明

	cout << "x = " << x << ", &x=" << &x <<" , a = " << a << " , &a= " << &a

		 << ", r = " << r << ", &r=" << &r << endl;

	r = 25;			//改变 r,则 a 和 x 都同步变化

	cout << "x = " << x << ", &x=" << &x <<" , a = " << a << " , &a= " << &a

		 << ", r = " << r << ", &r=" << &r << endl;

}

void error_example()
{
	int x = 60;

	int& a = x;

	//int& & d = x;         //不能引用的引用 
    //int * & r = &x;		//不能声明指针对x的引用

	int *p = &x;
	int * & q = p;		    //声明对指针的引用

	int * r = &a;			//声明指向引用的指针
	array_ref();
	//cout << *r <<endl << p;	
	exit(0);
}

void array_ref()
{
	array a = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
	array &b = a;
	a[2] = 100;		//操作数组a
	for(int i = 0; i < 10; i++)
		cout << b[i] << " ";
	cout << endl;
}
