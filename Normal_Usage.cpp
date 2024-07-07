#include "Normal_Usage.h"
void Normal_Usage::setusageinhouse(float UHO)
{
	usageinhouse = UHO;
}
void Normal_Usage::setusageinindustry(float UI)
{
	usageinindustry = UI;
}
void Normal_Usage::setusageinhospital(float UH)
{
	usageinhospital = UH;
}
float Normal_Usage::getusageinhouse()
{
	return usageinhouse;
}
float Normal_Usage::getusageinindustry()
{
	return usageinindustry;
}
float Normal_Usage::getusageinhospital()
{
	return usageinhospital;
}
Normal_Usage::Normal_Usage()
{
	usageinhouse = 0;
	usageinhospital = 0;
	usageinindustry = 0;
}
Normal_Usage::Normal_Usage(float UHO, float UI, float UH)
{
	usageinhouse = UHO;

	usageinindustry = UI;

	usageinhospital = UH;
}
Normal_Usage::Normal_Usage(Normal_Usage& obj)
{
	usageinhouse = obj.usageinhouse;

	usageinindustry = obj.usageinindustry;

	usageinhospital = obj.usageinhospital;
}
ostream& Normal_Usage::operator<<(ostream& out)
{
	out << usageinhouse << endl;
	out << usageinindustry << endl;
	out << usageinhospital << endl;
	return out;
}
istream& Normal_Usage::operator>>(istream& in)
{
	in >> usageinhouse;
	in >> usageinhospital;
	in >> usageinindustry;
	return in;
}


void Overflow::setoverflowinhouse(float OH)
{
	overflowinhouse = OH;
}
void Overflow::setoverflowinhospital(float OFH)
{
	overflowinhospital = OFH;
}
void Overflow::setoverflowinindustry(float OI)
{
	overflowinindustry = OI;
}
float Overflow::getoverflowinhouse()
{
	return overflowinhouse;
}
float Overflow::getoverflowinhospital()
{
	return overflowinhospital;
}
float Overflow::getoverflowinindustry()
{
	return overflowinindustry;
}
Overflow::Overflow()
{
	overflowinhouse = 0;
	overflowinindustry = 0;
	overflowinhospital = 0;
}
Overflow::Overflow(float OH, float OFH, float OI)
{
	overflowinhouse = OH;

	overflowinhospital = OFH;

	overflowinindustry = OI;
}
Overflow::Overflow(Overflow& obj)
{
	overflowinhouse = obj.overflowinhouse;

	overflowinindustry = obj.overflowinindustry;

	overflowinhospital = obj.overflowinhospital;
}
ostream& Overflow::operator<<(ostream& out)
{
	out << overflowinhouse << endl;
	out << overflowinindustry << endl;
	out << overflowinhospital << endl;
	return out;
}
istream& Overflow::operator>>(istream& in)
{
	in >> overflowinhouse;
	in >> overflowinhospital;
	in >> overflowinindustry;
	return in;
}



void tank::setliter(float l)
{
	liter = l;
}
void tank::setpower(float p)
{
	power = p;
}
void tank::settime(int m)
{
	min = m;
}
float tank::getliter()
{
	return liter;
}
float tank::getpower()
{
	return power;
}
int tank::gettime()
{
	return  min;
}
tank::tank()
{
	liter = 0;
	power = 0;
	min = 0;
}
tank::tank(float p, float l, int m)
{
	power = p;

	liter = l;

	min = m;
}
tank::tank(tank& obj)
{
	power = obj.power;

	liter = obj.liter;

	min = obj.min;
}
ostream& tank::operator<<(ostream& out)
{
	out << liter << endl;
	out << power << endl;
	out << min << endl;
	return out;
}
istream& tank::operator>>(istream& in)
{
	in >> liter;
	in >> power;
	in >> min;
	return in;
}