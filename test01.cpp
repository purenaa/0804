#include <iostream>

using namespace std;

//Call By Reference의 예

void swap1(int* a, int* b)	//*a : a의 포인터(a의 값)		//int *r = &a;
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap2(int& a, int& b)	//&a : a의 주소		//int &r = a;
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 10, b = 20;
	printf("<< A:%d, B:%d\n", a, b);
	swap1(&a, &b);
	printf(">> A:%d, B:%d\n", a, b);
	swap2(a, b);
	printf(">> A:%d, B:%d\n", a, b);

	return 0;
}

