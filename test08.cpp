#include <iostream>
using namespace std;

class Chulsoo {
public:		//접근 지정자
	void Eat();
};

void Chulsoo::Eat() {		//::는 Eat() 함수가 Chulsoo 클래스에 있다고 알려주는 표시
	cout << "철수는 먹는다" << endl;
}

int main(void) {
	Chulsoo chulsoo;
	chulsoo.Eat();
	return 0;
}