#include <iostream>
using namespace std;

int getSize() {
	return 200;
}

int main() {
	const int size = 100;
	const int bufferSize = getSize();
	//size = 200;
	//const int count;	//선언과 동시에 초기화해야 함

	cout << size << endl;
	cout << bufferSize << endl;

	return 0;
}