#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES	//for c++
//#include <cmath>			//<math.h> for c || <cmath> for c++
#include <math.h>
using namespace std;

//#define M_PI 3.141592

int main()
{
	int i = 3.65;
	long I = M_PI;
	float f = M_PI;
	double d = M_PI;

	//printf("%d %ld\n", i, I);
	
	cout << i << " " << I << endl;
	//printf("%.20f %.20f\n", f, d);
	cout << fixed;		//cout���� �Ҽ��� �ڸ����� �����Ҷ� cout << fixed; �̰ſ�
	cout.precision(20);		//cout.precision(�ڸ���); �� ����Ѵ�.
	cout << f << " " << d << endl;

	return 0;
}

