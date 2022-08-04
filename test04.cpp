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
	cout << fixed;		//cout에서 소수점 자리수를 지정할때 cout << fixed; 이거와
	cout.precision(20);		//cout.precision(자리수); 를 써야한다.
	cout << f << " " << d << endl;

	return 0;
}

