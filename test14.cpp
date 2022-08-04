#include <iostream>
using namespace std;


class Chulsoo {
public:
	void Eat(int SteakWeight);	
	inline void Eatlnline(int SteakWeight);		//인라인 함수 선언
};


int main(void)
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.Eatlnline(500);		//인라인 함수 호출
	return 0;
}


void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat()::철수는 " << SteakWeight << "g 짜리 스테이크를 먹는다" << endl;
}

inline void Chulsoo::Eatlnline(int SteakWeight)		//인라인 함수 정의
{
	cout << "Eatlnline()::철수는 " << SteakWeight << "g 짜리 스테이크를 먹는다" << endl;
}
