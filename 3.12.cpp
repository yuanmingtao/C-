#include<iostream>

using namespace std;

double max_12(double, double);			//2个实型参数的函数原型
int max_12(int, int);					//2个整型参数的函数原型
char max_12(char, char);				//2个字符型参数的函数原型
int max_12(int, int, int);				//3个整型参数的函数原型
int add(int m1 = 0, int m2 = 0, int m3 =0, int m4 =0) { return m1 + m2 + m3 + m4;}
void main_3_12() {
	cout << max_12(2.5, 17.54) << " " << max_12(56, 8) << " " << max_12('w', 'p') << endl;
	cout << "max_12(5,9,4) = " << max_12(5, 9, 4) << " max_12(5,4,9) = " << max_12(5, 4, 9) << endl;

	cout << add(1,3) << "," << add(1, 3, 5) << "," << add(1,3,5,7) << endl;
}

double max_12(double m1, double m2) {return (m1 > m2) ? m1:m2;}
int max_12(int m1, int m2) {return (m1 > m2) ? m1:m2;}
char max_12(char m1, char m2) {return (m1 > m2) ? m1:m2;}
int max_12(int m1, int m2, int m3)
{
	int t = max_12(m1,m2);
	return max_12(t, m3);
}