#pragma once
#include "pechenie.h"
/*� ������������ ����� � ������� �� ����� �������� ������ ����� ����������� ������ ������ ������� ����� � ��� ���������*/

class tort :protected Pechenie//������������ protected. ���� �������� ������ ���������� protected
{									//����� private �� �� ��������
public: int diametr;//����� ������������ ��� ������
		int getdiametr();
		tort(){}
		~tort(){}
		tort(int c,int s,int ma, string tip, int diam, string nach);
		void setnachinka(string);
		void setdiam(int);
		void show();
		void toConsole();

protected: string nachinka;//�������� � ���� ������ � ����������� � �����������
		   string getnach();//�� ������ �������� ��� ������
};

class Birth_tort :public tort// �� �������� ������ private-����������(�� �����������)
{												//public-public
												//protected-protected
	static int Counter;
public:	
	Birth_tort();
	Birth_tort(int c,int s,int ma, string nach);
	void setstandart();
	const int diam = 25;
	string canGetnach();
	int getdiametr()const{ return diam; }//� �����a����� ������� ������ ������ ���� ������
	~Birth_tort();
	void toConsole();
	static int getCounter();
};

