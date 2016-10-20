#pragma once
#include "base.h"

class Konditer_Izdel: virtual public Base
{
	int cost;
	int shugar;
	int massa;
public:
	
	void setCost(int);
	int getCost();
	int getcost();
	void setShugar(int);
	int getShugar();
	int getshugar();
	void setMassa(int);
	int getMassa();
	int getmassa();
	int gm();
	Konditer_Izdel();
	Konditer_Izdel(int cost,int shugar,int massa);
	~Konditer_Izdel();
	 void show();
	 void toConsole();
};




