#pragma once
#include"Library.h"
class Bus {
	int busNo;
	string name;
	string sname;
	int routeNo;
	int countPl;
public:
	Bus();
	Bus(int, string, string, int, int);
	
	int getBusNo()const;
	int getRouteNo()const;
	string getName()const;
	string getSname() const;
	int getCountPl() const;

	friend ostream& operator<<(ostream& os, Bus b);
	friend istream& operator >> (istream& is, Bus & b);
};

class cmpBusNo {
public:
	bool operator()(const Bus& b1, const Bus& b2) {
		return b1.getBusNo() < b2.getBusNo();
	}
};
class cmpRouteNo {
public:
	bool operator()(const Bus& b1, const Bus& b2) {
		return b1.getRouteNo() < b2.getRouteNo();
	}
};