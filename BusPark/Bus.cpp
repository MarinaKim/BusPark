#include "Bus.h"

Bus::Bus()
{
	busNo = 0;
	name = "";
	sname = "";
	routeNo = 0;countPl = 0;
}

Bus::Bus(int busNo, string name, string sname, int routeNo, int coutnPl)
{
	this->busNo = busNo;
	this->name = name;
	this->sname = sname;
	this->routeNo = routeNo;
	this->countPl = coutnPl;
}

int Bus::getBusNo() const
{
	return busNo;
}

int Bus::getRouteNo() const
{
	return routeNo;
}

string Bus::getName() const
{
	return name;
}

string Bus::getSname() const
{
	return sname;
}

int Bus::getCountPl() const
{
	return countPl;
}

ostream & operator<<(ostream & os, Bus b)
{
	os << b.busNo << "\t" << b.name << "\t" << b.sname << "\t" << b.routeNo <<"\t"<< b.countPl << endl;
	return os;
}

istream & operator >> (istream & is, Bus & b)
{
	is >> b.busNo >> b.name >> b.sname >> b.routeNo >> b.countPl;
	return is;
}
