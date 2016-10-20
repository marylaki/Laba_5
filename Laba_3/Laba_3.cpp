// Laba_3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "koditer.h"
#include "konfeta.h"
#include "chocolate_konf.h"
#include "pechenie.h"
#include "dop_class1.h"
#include "Detskiy_Podarok.h"
using namespace std;

class Printer
{
public:
	void IAmPrinting(Base* some)
	{
		std::cout << typeid(some).name() << endl;
		some->toConsole();
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus"); 
	Detskiy_Podarok p(3);
	Kontroller k;
	int choise = 1,n;
	while (choise > 0 && choise < 9)
	{
		cout << "\n\n **************Menu************\n\n";
		cout << "1-�������� ������� � ������\n";
		cout << "2-�������� ������� ������\n";
		cout << "3-������� ������� �� ������ �� ������\n";
		cout << "4-������� ������� �� ������\n";
		cout << "5-�������� ������\n";
		cout << "6-������� �����\n";
		cout << "7-���������� ������ ������\n";
		cout << "8-����� ������ �� ��������� ��������� ������\n";
		cout << "******************************\n\n";
	M:	cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "���������� ��������\n";
			p.insert(Detskiy_Podarok::sozd());
			break;
		case 2:
			cout << "��������� �������� � ������\n";
			cout << "������� ����� ����������� ��������\n";
			cin >> n;
			p.set(n, Detskiy_Podarok::sozd());
			break;
		case 3:
			cout << "�������� �������� �� ������\n";
			cout << "������� ����� ���������� ��������\n";
			cin >> n;
			p.del_elem(n);
			break;
		case 4:
			cout << "������� ����� ��������, ��� ��� ������\n";
			cin >> n;
			p.get(n);
			break;
		case 5:
			cout << "�������� ������\n";
			p.clear();
			break;
		case 6:
			p.Show();
			break;
		case 7:
			k.Sort(p,0);
			break;
		case 8:
			k.diapazon(p);
			break;
		default:cout << "����������� �����\n"; goto M;
		}
	}
	
	
	return 0;
}

