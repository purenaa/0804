#include <iostream>
using namespace std;


class Chulsoo {
public:
	void Eat(int SteakWeight);	
	inline void Eatlnline(int SteakWeight);		//�ζ��� �Լ� ����
};


int main(void)
{
	Chulsoo chulsoo;
	chulsoo.Eat(500);
	chulsoo.Eatlnline(500);		//�ζ��� �Լ� ȣ��
	return 0;
}


void Chulsoo::Eat(int SteakWeight)
{
	cout << "Eat()::ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
}

inline void Chulsoo::Eatlnline(int SteakWeight)		//�ζ��� �Լ� ����
{
	cout << "Eatlnline()::ö���� " << SteakWeight << "g ¥�� ������ũ�� �Դ´�" << endl;
}
