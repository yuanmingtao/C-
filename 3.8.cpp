/*返回引用的函数*/

//数据类型  &  函数名(参数列表)

#include<iostream>

using namespace std;

int a[] = {2, 4, 6, 8, 10, 12}; //全局数组

int & index(int i);				//返回引用的函数原型声明

void main_3_8() {
	index(3) = 16;				//将a[3]改为16
	cout << index(3) << endl;	//输出16
}

int & index(int i)				//函数定义
{
	return a[i];				//返回指定下标的整数数组内容
}