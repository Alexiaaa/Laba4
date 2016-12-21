// À‡· 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;
class car
{   protected:
	int pas, w, ms;
	string name;
    public:
    car(int Pas, int W, int Ms,string Name);
	virtual void print()=0;

};
car::car(int Pas, int W, int Ms, string Name)
{
	pas = Pas;
	w = W;
	ms = Ms;
	name = Name;
}

class internalcombustion : public car
{
 protected:
 int num;
public:
	internalcombustion(int Pas, int W, int Ms, string Name, int Num);
	virtual void print()=0;
};

internalcombustion::internalcombustion(int Pas, int W, int Ms, string Name, int Num):car(Pas, W, Ms,Name)
{
	num = Num;
}
class electric : public car
{  
   protected:
	int power;
    public:
	electric(int Pas, int W, int Ms, string Name, int Power);
	virtual void print() = 0;
	
};
electric::electric(int Pas, int W, int Ms, string Name, int Power) :car(Pas, W, Ms, Name)
{
	power = Power;
}
class passengercar : public internalcombustion
{
    protected:
	string gb;
    public:
	passengercar(int Pas, int W, int Ms, string Name, int Num, string Gb);
	void print();
	
	
};

passengercar::passengercar(int Pas, int W, int Ms, string Name, int Num, string Gb) :internalcombustion(Pas, W, Ms, Name, Num)

{
	gb = Gb;
}
void passengercar :: print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << pas << endl;
	cout << "Weight: " << w << endl;
	cout << "Max Speed: " << ms << endl;
	cout << "Number of doors: " << num << endl;
	cout << "Gearbox: " << gb << endl;
	cout << "\n";
}
class vargo : public internalcombustion
{   
    protected:
	int bc;
     public:
	vargo(int Pas, int W, int Ms, string Name, int Num,  int Bc);
	void print();
	
};
void vargo::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << pas << endl;
	cout << "Weight: " << w << endl;
	cout << "Max Speed: " << ms << endl;
	cout << "Number of doors: " << num << endl;
	cout << "Bearing capacity: " << bc << endl;
	cout << "\n";
}
vargo::vargo(int Pas, int W, int Ms, string Name, int Num, int Bc) :internalcombustion(Pas, W, Ms, Name, Num)
{
	bc = Bc;
}
class bus : public internalcombustion
{   protected:
	int fl;
    public:
	bus(int Pas, int W, int Ms, string Name, int Num,  int Fl);
	void print();
	
	
};
void bus::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << pas << endl;
	cout << "Weight: " << w << endl;
	cout << "Max Speed: " << ms << endl;
	cout << "Number of doors: " << num << endl;
	cout << "Floors: " << fl << endl;
	cout << "\n";
	
}
bus::bus(int Pas, int W, int Ms, string Name, int Num, int Fl) :internalcombustion(Pas, W, Ms, Name, Num)
{
	fl = Fl;
}
class trolleybus : public electric
{
protected:
	int vol, loa;
     public:
	trolleybus(int Pas, int W, int Ms, string Name, int Power, int Vol, int Loa);
	void print();
	

	
};

trolleybus::trolleybus(int Pas, int W, int Ms, string Name, int Power, int Vol, int Loa) : electric(Pas,W,Ms,Name,Power)
{
	vol = Vol;
	loa = Loa;
}
void trolleybus::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << pas << endl;
	cout << "Weight: " << w << endl;
	cout << "Max Speed: " << ms << endl;
	cout << "Voltage: " << vol << endl;
	cout << "Length of Arrows: " << loa << endl;
	cout << "Power: " << power << endl;
	cout << "\n";

}
class tram : public electric
{
protected:
	int rw, noc;
     public:
	tram(int Pas, int W, int Ms, string Name, int Power, int Rw, int Noc);
	void print();
	
};
tram::tram(int Pas, int W, int Ms, string Name, int Power, int Rw, int Noc): electric(Pas, W, Ms, Name, Power)
{
	rw = Rw;
	noc = Noc;
}

void tram::print()
{
	cout << "Name: " << name << endl;
	cout << "Passengers: " << pas << endl;
	cout << "Weight: " << w << endl;
	cout << "Max Speed: " << ms << endl;
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

