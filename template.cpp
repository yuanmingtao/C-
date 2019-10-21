#include<iostream>
using namespace std;
template<class T>
T max_3_5(T m1, T m2)
{return (m1 > m2) ? m1:m2;}

void main_3_5_2() {
	cout << max_3_5(2, 5) << "\t" << max_3_5(2.0, 5.) << "\t"
		 << max_3_5('w', 'a') << "\t" << max_3_5("ABC", "ABD") << endl;
}