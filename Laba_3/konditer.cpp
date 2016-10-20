#include "stdafx.h"
#include "koditer.h"
#include <iostream>

void Konditer_Izdel::setCost(int c)
{
	cost = c;
}

int Konditer_Izdel::getCost()
{
	std::cout << "Цена " << cost<<" коп.\n";
	return cost;

}

int Konditer_Izdel::getcost()
{

	return cost;

}

void Konditer_Izdel::setShugar(int s)
{
	shugar = s;
}

int Konditer_Izdel::getShugar()
{
	std::cout << "Сахар " << shugar << "\n";
	return shugar;

}
int Konditer_Izdel::getshugar()
{
	return shugar;

}

void Konditer_Izdel::setMassa(int m)
{
	massa = m;
}

int Konditer_Izdel::gm()
{
	return massa;
}
int Konditer_Izdel::getMassa()
{
	std::cout << "Maссa " << massa << " гр.\n";
	return massa;

}
int Konditer_Izdel::getmassa()
{
	return massa;

}

Konditer_Izdel::Konditer_Izdel()
{
}

Konditer_Izdel::~Konditer_Izdel()
{
	
}

void Konditer_Izdel::show()
{
	std::cout << "\nКондитерское изделие\n";
	this->getCost();
	this->getMassa();
	this->getShugar();
	std::cout << std::endl;
}

void Konditer_Izdel::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}

Konditer_Izdel::Konditer_Izdel(int c,int s,int m)
{
	this->setCost(c);
	this->setShugar(s);
	this->setMassa(m);
}