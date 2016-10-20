#include "stdafx.h"
#include "dop_class1.h"
#include <iostream>
int Birth_tort::Counter = 0;
int tort::getdiametr()
{ 
	cout << "Диаметр: " << diametr<<endl;
	return diametr;
}

void tort::setnachinka(string n)
{ 
	nachinka = n; 
}

void tort::setdiam(int d)
{
	this->setCost(1);
	diametr = d;
}

void tort::show()
{ 
	cout << "\nТорт\n";
	this->getCost();
	this->getMassa();
	this->getShugar();
	this->getTip();
	this->getnach();
	this->getdiametr();
	cout << endl;
}

tort::tort(int c, int s, int ma, string tip, int diam, string nach) :Pechenie(c,s,ma,tip)
{
	this->setdiam(diam);
	this->setnachinka(nach);
}

void tort::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
/*********************************************************/
string tort::getnach()
{ 
	cout << "Начинка :" << nachinka << endl;
	return nachinka; 
}

void Birth_tort::setstandart()
{
	diametr = Birth_tort::diam;
}
string Birth_tort::canGetnach()
{ 
	return getnach(); 
}
Birth_tort::Birth_tort()
{
	Counter++;
}
Birth_tort::~Birth_tort()
{
	Counter--;
}
int Birth_tort::getCounter()
{
	cout << "Объектов класса Birth_tort " << Counter<<"шт.\n";
	return Counter;
}

void Birth_tort::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}

Birth_tort::Birth_tort(int c, int s, int ma, string nach) : tort(c, s, ma, "Бисквит",0,nach)
{
	this->setstandart();
}
/***********************************************************/

