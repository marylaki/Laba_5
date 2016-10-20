#pragma once
#include "koditer.h"
#include <string>
using namespace std;

class Konfeta:public Konditer_Izdel
{
	string forma;
public:
	class Karamel
	{
	public:
		int massa;
		void setMassa(int);
		int getMassa();
		Karamel();
		~Karamel();
		static Konfeta karam_konf();//вызывает методы внешнего класса
	}k;
	void set_Karamel(int);
	int get_Karamel();
	void setForma(string);
	string getForma();
	Konfeta();
	Konfeta(int, int, int,string, int);
	~Konfeta();
	bool isKaramel();//проверяет поле вложенного класса
	void show();
	void toConsole();
};