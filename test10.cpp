#include <iostream>
using namespace std;

int getSize() {
	return 200;
}

int main() {
	const int size = 100;
	const int bufferSize = getSize();
	//size = 200;
	//const int count;	//����� ���ÿ� �ʱ�ȭ�ؾ� ��

	cout << size << endl;
	cout << bufferSize << endl;

	return 0;
}