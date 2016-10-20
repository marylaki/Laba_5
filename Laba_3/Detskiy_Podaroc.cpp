#include "stdafx.h"
#include <iostream>
#include "Detskiy_Podarok.h"
#include "Konfeta.h"
#include "Chocolate_konf.h"
using namespace std;

int Detskiy_Podarok::massa_dp = 0;

Detskiy_Podarok::Detskiy_Podarok()
{
	Head = NULL;
}

Base* Detskiy_Podarok::sozd()
{
	int c, s, m, mk, choise; string forma, chocolat;
A:	cout << "1-Карамельная конфета\n";
	cout << "2-Шоколадная конфета\n";
	cin >> choise;
	cout << "Стоимость: "; cin >> c;
	cout << "Сахар: "; cin >> s;
	cout << "Масса: "; cin >> m;
	cout << "Форма: "; cin >> forma;
	cout << "Масса карамели: "; cin >> mk;
	switch (choise)
	{
	case 1:
	{
		Konfeta* k = new Konfeta(c, s, m, forma, mk);
		return k;
	}break;
	case 2:
	{
		 cout << "Вид шоколада: "; cin >> chocolat;
		 Chocolate_konfeta* C = new Chocolate_konfeta(c, s, m, forma, mk, chocolat);
		 return C;
	}break;
	default:cout << "\nНеверный выбор!\n"; goto A; break;
	}
}
Detskiy_Podarok::Detskiy_Podarok(int kol)
{
	Head = NULL; int k;
	cout << "Введите клочичество конфет в подарке :";
	cin >> k;
	if (k < 1)k = kol;
	for (int i = 0; i < k; i++)
	{
		this->insert(sozd());
	}
	this->Show();
}

void Detskiy_Podarok::insert(Base* data)
{
	massa_dp += data->getmassa();
	Slad *elem=new Slad(NULL,NULL, data);
	if (Head == NULL)
	{
		Head = elem;
		
	}
	else
	{
		Slad* e=Head;
		while (e->Next!=NULL)
		{
			e = e->Next;
		}
		e->Next = elem;
		elem->Prev = e;
		
	}
}
void Detskiy_Podarok::get(int nomer)
{
	Slad*e = Head; int k = 1;
	while (e != NULL && k<nomer)
	{
		k++;
		e = e->Next;
	}
	if (e != NULL)
	{
		std::cout << "Сладость № " << nomer << " из подарка:\n";
		(e->getData())->show();
	}
	else
	{
		std::cout << "Сладость № " << nomer << " из подарка НЕ НАЙДЕНА\n";
	}
	
}
Slad* Detskiy_Podarok::Get_slad(int nomer)
{
	Slad*e = Head; int k = 1;
	while (e != NULL && k<nomer)
	{
		k++;
		e = e->Next;
	}
	return e;
}

void Detskiy_Podarok::Show()
{
	Slad*e = Head;
	std::cout << "\n**************Детский подарок**********\n\n";
	while (e != NULL)
	{
		(e->getData())->show();
		e = e->Next;
	}
	cout << endl;
	this->getMassa_dp();
	std::cout << "\n\n***************************************\n";
}
void Detskiy_Podarok::del_elem(int nomer)
{
	Slad*e = Head; int k = 1;
	while (e != NULL && k<nomer)
	{
		k++;
		e = e->Next;
	}
	if (e != NULL)
	{
		if (e == Head)
		{
			massa_dp -= (e->getData())->getmassa();
			Head= Head->Next;
			if (Head != NULL)
			{
				Head->Prev = NULL;
				delete[]e;
			}
		}
		else
		{
			if (e->Next != NULL)
			{
				e->Prev->Next = e->Next;
				e->Next->Prev = e->Prev;
				massa_dp -= (e->getData())->getmassa();
				delete[]e;
			}
			else
			{
				e->Prev->Next = e->Next;
				massa_dp -= (e->getData())->getmassa();
				delete[]e;
			}
		}

	}
}

void Detskiy_Podarok::set(int nomer, Base* data)
{
	int k = 1;
	if (Head != NULL)
	{
		Slad* e = Head;
		while (e->Next != NULL && k<nomer)
		{
			k++;
			e = e->Next;
		}
		if ( k == nomer)
		{
			massa_dp-=e->Data->getmassa();
			e->Data = data;
		}
		else
		{
			this->insert(data);
		}

	}
}

void Detskiy_Podarok::clear()
{
	while (Head != NULL)
	{
		this->del_elem(1);
	}

}

int Detskiy_Podarok::getMassa_dp()
{
	cout << "Масса детского подарка: " << massa_dp <<"гр.\n";
	return massa_dp;
}

/*void Kontroller::Sort(Detskiy_Podarok& dp)
{
	int min = 0, nmin = 1, n = 2,s=1; Base* temp;
	if (dp.Head != NULL)
	{
		Slad*e;
		while (dp.Get_slad(s+1)!=NULL)
		{
			min = (dp.Get_slad(s)->getData())->getCost();
			e = dp.Get_slad(s+1);
			n = s+1;
			while (e != NULL)//poisk minimalnogo
			{
				if ((e->getData())->getCost() < min)
				{
					nmin = n;
					min = (e->getData())->getCost();
				}
				n++;
				e = e->Next;
			}
			if (s != nmin)//perestanovka
			{
				temp = (dp.Get_slad(nmin))->getData();
				dp.set(nmin, (dp.Get_slad(s))->getData());
				dp.set(s, temp);
			}
			s++;
			
			
		}
		cout << "\nОтсортированный по цене конфет Детский Подарок\n";
		dp.Show();

	}
}
*/
int Kontroller::Sort(Detskiy_Podarok& dp,int s)//Recursivnaya functsiya
{
	Slad*e; int nmin = s; Base* temp;
	if (dp.Get_slad(s) == NULL) return 0;
	int min = (dp.Get_slad(s)->getData())->getcost();
	e = dp.Get_slad(s + 1);
	int n = s + 1;
	while (e != NULL)//poisk minimalnogo
	{
		if ((e->getData())->getcost() < min)
		{
			nmin = n;
			min = (e->getData())->getcost();
		}
		n++;
		e = e->Next;
	}
	if (s != nmin)//perestanovka
	{
		temp = (dp.Get_slad(nmin))->getData();
		dp.set(nmin, (dp.Get_slad(s))->getData());
		dp.set(s, temp);
	}
	s++;
	return this->Sort(dp, s);
}
void Kontroller::diapazon(Detskiy_Podarok& dp)
{
	Slad*e = dp.Head; int min, max;
	cout << "Вывести конфеты с диапазоном сахара\n";
	cout << "Oт: "; cin >> min;
	cout << "До: "; cin >> max;
	while (e != NULL)
	{
		if ((e->getData())->getshugar()>=min && (e->getData())->getshugar()<=max)
		(e->getData())->show();
		e = e->Next;
	}
	
}