/*函数返回值作为函数的参数*/

#include <iostream>
using namespace std;

int max_3_11(int, int);					//2个整型参数的函数原型

void main_3_11()
{
	cout << max_3_11(55, max_3_11(25, 39)) << endl;
}

int max_3_11(int m1, int m2)
{

	return m1 > m2 ? m1 : m2;
}