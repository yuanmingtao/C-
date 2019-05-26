
//const限定符强制改变访问权限

#include <iostream>

using namespace std;

void main_const()
{
	//1.指向常量的指针 *p不能作为左值进行赋值

	const int y = 58;
	int x = 45;

	const int * p = &y;  //指向常量的指针指向常量 y , y 不能作为左值

	//*p = 45;   //*p告诉编译器 *p是常量,不能将 *p作为左值进行操作	
	p = &x;      //可以用&改变指针指向

	const int *p1 = &x;
	
	x = 34;
	cout << *p1 << endl;

	//2.常量指针 p不能作为左值进行赋值

    int * const p2 = &x;
	
	//p2 = &y;   //编译器把 "p2" 看作常量地址,所以不能作为左值
	
	 //p2 = &y;      //指向常量的指针不能转换成常量指针
	
	*p2 = 56;
	cout << *p2 << endl;

	//3.指向常量的常量指针  *p p均不能能赋值

	const int * const p3 = &x;
	//p3 = &y;
	//*p3 = 49;

	cout << *p3 << endl;
	
}