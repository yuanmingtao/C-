//数据的简单输入输出格式

//io_base类

//操控符的特殊函数 

/*
表 1.1 操控符及其含义
+-----------------------------+-----------------------------+----------------
    名称                      |	含义	                    |  作用
+-----------------------------+-----------------------------+----------------
  dec                         |  设置转转基数为十进制       |  输入/输出
  oct                         |  设置转转基数为八进制       |  输入/输出
  hex                         |  设置转转基数为十六进制     |  输入/输出 
+-----------------------------+-----------------------------+----------------
  endl                        |  输出一个换行符并刷新流     |  输出
  resetiosflags(long flag)    |  清除 flag 指定的标志位     |  输出
  setiosflags(long flag)      |  设置 flag 指定的标志位     |  输出
  setfill(char ch)            |  设置 ch 为填充字符	        |  输出
  setprecision(int n)         |  设置浮点数输出精度 n       |  输出
  setw(int width)             |  设置输出数据字段宽度 width |  输出
+-----------------------------+-----------------------------+-----------------

  表 1.2 常量及其含义
+-----------------------------+----------------------------------------------
   常量名                     |	含义	                    
+-----------------------------+----------------------------------------------
  ios_base::left              |  输出数据按输出域左边对齐输出
  ios_base::right             |  输出数据按输出域右边对齐输出
  ios_base::showpoint         |  浮点输出时必须带有一个小数点
  ios_base::showpos           |  在正数前添加一个" + "号
  ios_base::scientific        |  使用科学计数法表示浮点数
  ios_base::fixed             |  使用定点形式表示浮点数
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
	cout << a << setw(6) << b << endl;   //设置b按域宽为6输出
	cout << setw(6) << a << b << endl;   //setw只对紧接着的那个元素有效
}

void another_ex()
{
	cout << PI << endl
	<< setprecision(0) << PI << endl   //设定显示小数位数(小数点也占1位) 0 等于不设，由系统决定
	<< setprecision(1) << PI << endl   // 1 代表显示整数数字
	<< setprecision(2) << PI << endl   // 2 显示小数点后面1位(小数点也占1位)
	<< setprecision(3) << PI << endl  
	<< setprecision(7) << PI << endl; 
	
	int b = 100;
	cout << "Dec: " << dec << b << endl;   
	cout << "Hex: " << hex << b << endl;
	cout << "Oct: " << oct << b << 100 << endl;  //输出后面的所有整型为八进制，直到清除格式

	cout << b << endl
		 << 100 << endl
		 << "Input b = ";

	cin >> b;
	cout << b << endl;
	cout << dec << setiosflags(ios_base::showpos) << b << endl;  //恢复十进制格式,并设置正数前加 +
	cout << "Input b = ";
	cin >> b;
	cout << b << endl;
	cout << resetiosflags(ios_base::showpos);   //清除格式 
	cout << b << endl;
}

void last_ex()
{
	cout << setfill('*')
		 << setw(0) << 15 << endl  //域宽n比显示位数少,不起作用,不影响显示。使用填充字符时，n比显示位数大1时，才发生填充作用
		 << setw(1) << 15 << endl
		 << setw(2) << 15 << endl
		 << setw(3) << 15 << endl
		 << setw(4) << 15 << endl;

	cout << setw(16) << setfill('*') << " " << endl;
	cout << setiosflags(ios_base::right)
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;

	cout << resetiosflags(ios_base::right);  //清除设置标志后，才能进行新的设置
	cout << setiosflags(ios_base::left)
		 << setw(5) << 1
		 << setw(5) << 2
		 << setw(5) << 3 << endl;
}

