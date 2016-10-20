#include "stdafx.h"
#include "chocolate_konf.h"
#include <iostream>

void Chocolate_konfeta::setVid(string v)
{
	vid = v;
}

string Chocolate_konfeta::getVid()
{
	std::cout << "Вид шоколада: "<<vid<<std::endl;
	return vid;
}

Chocolate_konfeta::Chocolate_konfeta()
{
}

Chocolate_konfeta::~Chocolate_konfeta()
{
	
}

void Chocolate_konfeta::show()
{
	cout << "\nШоколадная конфета\n";
	this->getCost();
	this->getMassa();
	this->getShugar();
	this->getForma();
	this->get_Karamel();
	this->getVid();
	cout << endl;
}

void Chocolate_konfeta::toConsole()
{
	std::cout << typeid(this).name();
	this->show();
}

Chocolate_konfeta::Chocolate_konfeta(int c,int s ,int ma,
	string form, int m, string vid) :Konfeta(c,s,ma,form,m)
{
	this->setVid(vid);
}