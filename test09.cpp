////call by value
//
//#include <iostream>
//using namespace std;
//
//class Restaurant {
//public:
//	int Steak; //������ũ ����
//};
//
//class Chulsoo {
//public:
//	int Eat(int);
//};
//
////ö���� ���� ������ũ ������ �޾Ƽ� ��ȯ�ϴ� �Լ� ����
//int Chulsoo::Eat(int SteakNum) {
//	SteakNum = 10000; //ö���� 10,000�� ¥�� ������ũ�� �Ծ��ٰ� ������
//	cout << "ö���� �Դ´�" << endl;
//	return SteakNum;
//}
//
//int main(void)
//{
//	Chulsoo chulsoo;
//	Restaurant restaurant;
//
//	//����������� ö������ �� ������ũ�� 20000��
//	restaurant.Steak = 20000;
//	cout << "ö���� " << chulsoo.Eat(restaurant.Steak)
//	 	 << "�� ¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�." << endl;
//	cout << "��������� ö���� " << restaurant.Steak
//		 << "�� ¥�� ������ũ�� �Ծ��ٰ� �˰� �ִ�." << endl;
//
//	return 0;
//}


//call by reference

#include <iostream>
using namespace std;

class Restaurant {
public:
	int Steak; //������ũ ����
};

class Chulsoo {
public:
	int Eat(int&);
};

//ö���� ���� ������ũ ������ �޾Ƽ� ��ȯ�ϴ� �Լ� ����
int Chulsoo::Eat(int& SteakNum) {
	SteakNum = 10000; //ö���� 10,000�� ¥�� ������ũ�� �Ծ��ٰ� ������
	cout << "ö���� �Դ´�" << endl;
	return SteakNum;
}

int main(void)
{
	Chulsoo chulsoo;
	Restaurant restaurant;

	//����������� ö������ �� ������ũ�� 20000��
	restaurant.Steak = 20000;
	cout << "ö���� " << chulsoo.Eat(restaurant.Steak)
		<< "�� ¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�." << endl;
	cout << "��������� ö���� " << restaurant.Steak
		<< "�� ¥�� ������ũ�� �Ծ��ٰ� �˰� �ִ�." << endl;

	return 0;
}