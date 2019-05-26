//泛型算法应用于普通数组

#include <iostream>

#include <algorithm>			//头文件

using namespace std;


void main_generic()
{
	double a [] = {1.1, 4.4, 3.3, 2.2}, b[4];
	copy(a, a + 4, ostream_iterator< double > (cout, " "));				//正向输出数组 a,以空格隔开
	cout << endl;

	reverse_copy(a, a + 4, ostream_iterator < double > (cout, " "));	//逆向输出数组 a ,以空格隔开
	cout << endl;

	copy(a, a + 4, b);													//远样复制到数组 b
	copy(b, b + 4, ostream_iterator < double >(cout, " "));				//正向输出数组 b,以空格隔开
	cout << endl;

	sort(a, a + 4);														//对数组 a 进行升幂排序
	copy(a, a + 4, ostream_iterator< double > (cout, " "));				//正向输出数组 a,以空格隔开
	cout << endl;

	reverse_copy(a, a + 4, b);											//将 a 的内容按逆向复制给数组 b
	copy(b, b + 4, ostream_iterator < double >(cout, " "));				//正向输出数组 b,以空格隔开
	cout << endl;
}
