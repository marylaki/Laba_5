#include "stdafx.h"
#include "pechenie.h"
#include <iostream>

void Pechenie::setTip(string t)
{
	tip = t;
}

string Pechenie::getTip()
{
	std::cout << "Тип печенья: "<<tip<<std::endl;
	return tip;
}

Pechenie::Pechenie()
{
	
}

Pechenie::~Pechenie()
{
	
}
void Pechenie::show()
{
	cout << "\nПеченье\n";
	this->getCost();
	this->getMassa();
	this->getShugar();
	this->getTip();
	cout << endl;
}

void Inspector::IkowAllAboutYou(Pechenie& cookis)
{
	cout << "\nInspector-Печенье\n";
	cookis.getCost();
	cookis.getMassa();
	cookis.getShugar();
	cout << "Тип: " << cookis.tip << endl;
	cout << endl;
}

void ICanModify(Pechenie& cookis)
{
	cookis.setCost(22);
	cookis.setShugar(10);
	cookis.setMassa(25);
	cookis.tip="Modify";
}

void Pechenie::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
Pechenie::Pechenie(int c, int s, int ma, string tip) :Konditer_Izdel(c,s,ma)
{
	
	this->setTip(tip);
}
