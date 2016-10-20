#include "stdafx.h"
#include "koditer.h"
#include "konfeta.h"
#include <iostream>

void Konfeta::setForma(string f)
{
	forma = f;
}

string Konfeta::getForma()
{
	std::cout << "Форма конфеты: " << forma << std::endl;
	return forma;
}

Konfeta::Konfeta()
{
	
}

Konfeta::~Konfeta()
{
	
}

void Konfeta::Karamel::setMassa(int m)
{
	massa = m;
}

int Konfeta::Karamel::getMassa()
{
	std::cout << "Macca карамели: "<<massa<<" гр.\n";
	return massa;
}

Konfeta::Karamel::Karamel()
{
	
}

Konfeta::Karamel::~Karamel()
{
	
}
void Konfeta::set_Karamel(int m)
{
	this->setMassa(this->gm() + m);
	k.setMassa(m);
}

int Konfeta::get_Karamel()
{
	return k.getMassa();
}

Konfeta Konfeta::Karamel::karam_konf()
{
	Konfeta konfet;
	konfet.setCost(11);
	konfet.setShugar(4);
	konfet.setForma("Круглая");
	konfet.set_Karamel(50);
	cout << "\nКонфета созданная во вложенном классе\n";
	konfet.show();
	return konfet;
}

bool Konfeta::isKaramel()
{
	return (this->k.massa > 0);
}
void Konfeta::show()
{
	cout << "\nКонфета\n";
	this->getCost();
	this->getMassa();
	this->getShugar();
	this->getForma();
	this->get_Karamel();
	cout << endl;
}
void Konfeta::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}
Konfeta::Konfeta(int c, int s, int ma, string t, int m) :Konditer_Izdel(c,s,ma)
{
	this->setForma(t);
	this->set_Karamel(m);
}