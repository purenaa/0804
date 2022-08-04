#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;		//scanf
	int *data = new int[num];
	for (int i = 0; i < num; i++)
		cin >> data[i];
	delete[] data;
}