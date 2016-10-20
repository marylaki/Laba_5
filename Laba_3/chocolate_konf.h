#pragma once
#include "konfeta.h"

class Chocolate_konfeta :public Konfeta
{
	string vid;
public:
	void setVid(string);
	string getVid();
	Chocolate_konfeta();
	Chocolate_konfeta(int c,int s,int m_izd, string form, int mk, string vid);
	~Chocolate_konfeta();
	void show();
	void toConsole();
};