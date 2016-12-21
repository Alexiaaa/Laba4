//// À‡· 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;
class car
{
protected:
	int passengers, weight, maxspeed;
	string name;
public:
	car(int Passengers, int Weight, int MaxSpeed, string Name);
	virtual void print() = 0;
};
car::car(int Passengers, int Weight, int MaxSpeed, string Name)
{
	passengers = Passengers;
	weight = Weight;
	maxspeed = MaxSpeed;
	name = Name;
}
class internalcombustion : public car
{
protected:
	int numofdoors;
public:
	internalcombustion(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors);
	virtual void print() = 0;
};

internalcombustion::internalcombustion(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors) :car(Passengers, Weight, MaxSpeed, Name)
{
	numofdoors = Numofdoors;
}
class electric : public car
{
protected:
	int power;
public:
	electric(int Passengers, int Weight, int MaxSpeed, string Name, int Power);
	virtual void print() = 0;
};
electric::electric(int Passengers, int Weight, int MaxSpeed, string Name, int Power) :car(Passengers, Weight, MaxSpeed, Name)
{
	power = Power;
}
class passengercar : public internalcombustion
{
protected:
	string gearbox;
public:
	passengercar(int Passengers, int Weight, int MaxSpeed, string Name, int Num, string Gearbox);
	void print();
};

passengercar::passengercar(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors, string Gearbox) :internalcombustion(Passengers, Weight, MaxSpeed, Name, Numofdoors)
{
	gearbox = Gearbox;
}
void passengercar::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << passengers << endl;
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << maxspeed << endl;
	cout << "Number of doors: " << numofdoors << endl;
	cout << "Gearbox: " << gearbox << endl;
	cout << "\n";
}
class vargo : public internalcombustion
{
protected:
	int bearingcapacity;
public:
	vargo(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors, int Bearingcapacity);
	void print();
};
void vargo::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << passengers << endl;
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << maxspeed << endl;
	cout << "Number of doors: " << numofdoors << endl;
	cout << "Bearing capacity: " << bearingcapacity << endl;
	cout << "\n";
}
vargo::vargo(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors, int Bearingcapacity) :internalcombustion(Passengers, Weight, MaxSpeed, Name, Numofdoors)
{
	bearingcapacity = Bearingcapacity;
}
class bus : public internalcombustion
{
protected:
	int floors;
public:
	bus(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors, int Floors);
	void print();
};
void bus::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << passengers << endl;
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << maxspeed << endl;
	cout << "Number of doors: " << numofdoors << endl;
	cout << "Floors: " << floors << endl;
	cout << "\n";
}
bus::bus(int Passengers, int Weight, int MaxSpeed, string Name, int Numofdoors, int Floors) :internalcombustion(Passengers, Weight, MaxSpeed, Name, Numofdoors)
{
	floors = Floors;
}
class trolleybus : public electric
{
protected:
	int voltage, length;
public:
	trolleybus(int Passengers, int Weight, int MaxSpeed, string Name, int Power, int Voltage, int Length);
	void print();
};

trolleybus::trolleybus(int Passengers, int Weight, int MaxSpeed, string Name, int Power, int Voltage, int Length) : electric(Passengers, Weight, MaxSpeed, Name, Power)
{
	voltage = Voltage;
	length = Length;
}
void trolleybus::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << passengers << endl;
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << maxspeed << endl;
	cout << "Voltage: " << voltage << endl;
	cout << "Length of Arrows: " << length << endl;
	cout << "Power: " << power << endl;
	cout << "\n";
}
class tram : public electric
{
protected:
	int rw, noc;
public:
	tram(int Passengers, int Weight, int MaxSpeed, string Name, int Power, int Rw, int Noc);
	void print();
};
tram::tram(int Passengers, int Weight, int MaxSpeed, string Name, int Power, int Rw, int Noc) : electric(Passengers, Weight, MaxSpeed, Name, Power)
{
	rw = Rw;
	noc = Noc;
}

void tram::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << passengers << endl;
	cout << "Weight: " << weight << endl;
	cout << "Max Speed: " << maxspeed << endl;
	cout << "Rail Width: " << rw << endl;
	cout << "Number of Cars: " << noc << endl;
	cout << "Power: " << power << endl;
	cout << "\n";
}

int main()
{
	cout << "Automobile: " << endl;
	passengercar BMW(5, 2000, 230, "BMW X5", 2, "hand type");
	BMW.print();
	cout << "Vargo: " << endl;
	vargo Zil(2, 25000, 150, "Zil-130", 4, 20000);
	Zil.print();
	cout << "Bus:" << endl;
	bus Etalon(40, 4000, 120, "Etalon A08128", 6, 1);
	Etalon.print();
	cout << "Trolleybus" << endl;
	trolleybus Solaris(140, 15000, 75, "Sollaris Trolliano 15", 765000, 600, 4);
	Solaris.print();
	cout << "Tram" << endl;
	tram Electron(250, 15000, 70, "Electron T5", 4000000, 1000, 5);
	Electron.print();
	return 0;
}

