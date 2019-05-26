//对字符数组操作

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

void main_array()
{
	char a[] = "wearehere!", b[11];
	reverse(a, a + 10);									//数组元素逆向
	copy(a, a + 10, ostream_iterator <char>(cout)); 
	cout << endl;

	copy(a, a + 11, b);									//原样复制到数组 b
	sort(a, a + 10);									//默认升幂排序
	cout << a << endl;									//输出排序结果
	cout << b << endl;									//输出数组 b 的内容

	reverse_copy(a, a + 10, b);						     
	//逆向复制到数组b; 不能复制结束符到第一位，否则字符串的第一位变成结束标志，使其成为空字符串

	cout << b << endl;									//输出逆向后的数组 b 的内容
	reverse(b + 2, b + 8);								//数组 b 部分逆向
	copy(b + 2, b + 8, ostream_iterator <char>(cout));  //输出数组 b 逆向后的部分内容
	cout << endl;

	sort(a, a + 10, greater<char>());					//降幂排序
	cout << a << endl;									//输出排序后的数组 a
	cout << ( * find(a, a + 10, 'e') == 'e') << " "
		<< ( * find(a, a + 10, 'O') == 'O') << endl;
}