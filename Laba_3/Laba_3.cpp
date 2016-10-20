// Laba_3.cpp: определяет точку входа для консольного приложения.
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
		cout << "1-Добавить элемент в список\n";
		cout << "2-Изменить элемент списка\n";
		cout << "3-Удалить элемент из списка по номеру\n";
		cout << "4-Вывести элемент по номеру\n";
		cout << "5-Очистить список\n";
		cout << "6-Вывести писок\n";
		cout << "7-Сортировка конфет поцене\n";
		cout << "8-Вывод конфет по заданному диапазону сахара\n";
		cout << "******************************\n\n";
	M:	cin >> choise;
		switch (choise)
		{
		case 1:
			cout << "Добавление элемента\n";
			p.insert(Detskiy_Podarok::sozd());
			break;
		case 2:
			cout << "Изменение элемента в списке\n";
			cout << "Введите номер изменяемого элемента\n";
			cin >> n;
			p.set(n, Detskiy_Podarok::sozd());
			break;
		case 3:
			cout << "Удаление элемента из списка\n";
			cout << "Введите номер удаляемого элемента\n";
			cin >> n;
			p.del_elem(n);
			break;
		case 4:
			cout << "Введите номер элемента, для его вывода\n";
			cin >> n;
			p.get(n);
			break;
		case 5:
			cout << "Очистить список\n";
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
		default:cout << "Непрвильный выбор\n"; goto M;
		}
	}
	
	
	return 0;
}

