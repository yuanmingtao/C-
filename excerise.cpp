#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

void ex_1();
void ex_2();
void ex_3();
void ex_4();

void main()
{
	ex_4();
}

void ex_1()
{
	char a [] = "65";
	char b [] = "66";
	char c = 65;
	char d = 66;
	cout << a << " , " << b << endl
		 << c << " , " << d << endl;
}

void ex_2()
{
	int * p = new int[100];
	delete p;
}

void ex_3()
{
	float * f = new float[5];

	int sum = 0;
	for( int i = 0 ; i < 5; i++)
		cin >>  * ( f + i );

	for(i = 0 ; i < 5; i++)
		sum += * ( f + i );

	cout << "Sum : " << sum << endl;
	
	for(i = 0 ; i < 5; i++)
		if ( * ( f + i ) < sum )
			sum = * ( f + i );
		else continue;

	cout << "Min: " << sum << endl;
	delete f;
}

void ex_4()
{
	int a [] = {1, 2, 3, 4, 5, 6, 7, 8}, b[8];

	cout << find(a, a+ 8, 4) << endl;

	copy(a, a + 8, b);

	copy(b, b + 8, ostream_iterator<int>(cout, " "));
	cout << endl;

	reverse(a, a + 8);

	copy(a, a + 8, ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << find(a, a+ 8, 4) << endl;

    copy(a, a + 8, ostream_iterator<int>(cout, " "));
	cout << endl;

    copy(b, b + 8, ostream_iterator<int>(cout, " "));
	cout << endl;
}