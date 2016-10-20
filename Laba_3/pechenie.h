#pragma once
#include "konfeta.h"
class Inspector;

class Pechenie: public Konditer_Izdel
{
	string tip; 
	friend Inspector;
	friend void ICanModify(Pechenie&);

public:
	void setTip(string);
	string getTip();
	Pechenie();
	Pechenie(int c,int s,int ma, string tip);
	~Pechenie();
	void show();
	void toConsole();
};
void ICanModify(Pechenie&);

class Inspector
{
public:
	void IkowAllAboutYou(Pechenie&);
};