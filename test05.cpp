#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream output;
	output.open("test.txt");
	output << "즐거운프로그래밍!!!" << endl;
	output.close();
	return 0;
}