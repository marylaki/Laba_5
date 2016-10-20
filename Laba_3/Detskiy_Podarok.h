#pragma once
#include "Base.h"
class Slad
{
	Base* Data;
	Slad* Next;
	Slad* Prev;
	friend class Detskiy_Podarok;
	friend class Kontroller;
	Slad(Slad*next, Slad*prev, Base*data)
	{
		Data = data;
		Next = next;
		Prev = prev;
	}
	Base* getData(){ return Data; }
};
class Detskiy_Podarok// Class konteiner
{
	Slad* Head;
	static int massa_dp;
	friend Kontroller;
public:
	Detskiy_Podarok();
	Detskiy_Podarok(int kol_elem);
	static Base* sozd();
	void insert(Base*);
	void get(int nomer);
	Slad* Get_slad(int nomer);
	void set(int nomer, Base*);
	void del_elem(int nomer);
	void clear();
	void Show();
	int getMassa_dp();

};
class Kontroller
{
public:
	//void Sort(Detskiy_Podarok&);
	void diapazon(Detskiy_Podarok&);
	int Sort(Detskiy_Podarok& dp, int s);
};