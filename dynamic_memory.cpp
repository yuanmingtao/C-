//动态分配内存

#include<iostream>

using namespace std;

void main3()
{
	double * p;						//声明double型指针
	p = new double[3];				//声明3个double型数据的存储空间

	for(int i = 0; i < 3; i++)		//定义对象i的初值为0
		cin >> * (p + i);			//将输入数据存入指定地址
	
	for(i = 0; i < 3; i++)
		cout << * (p + i) << " ";	//将地址里的内容输出

	delete p;						//释放已经申请的存储空间
}