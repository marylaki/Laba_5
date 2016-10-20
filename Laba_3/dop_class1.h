#pragma once
#include "pechenie.h"
/*К ненаследумым полям и методам мы можем получить доступ через наследуемые методы класса которые могут к ним обращатся*/

class tort :protected Pechenie//наследование protected. поля базового класса становятся protected
{									//кроме private он не доступен
public: int diametr;//можно использовать вне класса
		int getdiametr();
		tort(){}
		~tort(){}
		tort(int c,int s,int ma, string tip, int diam, string nach);
		void setnachinka(string);
		void setdiam(int);
		void show();
		void toConsole();

protected: string nachinka;//доступны в этом классе и паследуются в производный
		   string getnach();//не сможем вызывать вне класса
};

class Birth_tort :public tort// из базового класса private-недоступен(не наследуется)
{												//public-public
												//protected-protected
	static int Counter;
public:	
	Birth_tort();
	Birth_tort(int c,int s,int ma, string nach);
	void setstandart();
	const int diam = 25;
	string canGetnach();
	int getdiametr()const{ return diam; }//в констaнтных методах нельзя менять поля класса
	~Birth_tort();
	void toConsole();
	static int getCounter();
};

