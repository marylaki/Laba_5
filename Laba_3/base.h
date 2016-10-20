#pragma once
class Base//нельзя создавать обекты абстрактного класса
{
public:
	Base(){}
	virtual ~Base(){}
	virtual int getmassa() = 0;
	virtual int getshugar() = 0;
	virtual int getcost() = 0;
	virtual void  show() = 0;
	virtual void toConsole() = 0;
};
