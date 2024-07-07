#pragma once
#include<iostream>
using namespace std;
class Normal_Usage
{
protected:
	float usageinhouse;
	float usageinindustry;
	float usageinhospital;
public:
	void setusageinhouse(float);
	void setusageinindustry(float);
	void setusageinhospital(float);

	float getusageinhouse();
	float getusageinindustry();
	float getusageinhospital();

	Normal_Usage();
	Normal_Usage(float, float, float);
	Normal_Usage(Normal_Usage& obj);

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};
class Overflow :public Normal_Usage
{
protected:
	float overflowinhouse;
	float overflowinindustry;
	float overflowinhospital;
public:
	void setoverflowinhouse(float);
	void setoverflowinindustry(float);
	void setoverflowinhospital(float);

	float getoverflowinhouse();
	float getoverflowinindustry();
	float getoverflowinhospital();

	Overflow();
	Overflow(float, float, float);
	Overflow(Overflow& obj);

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};
class tank :public Normal_Usage
{
protected:
	float liter;
	int min;
	float power;
public:
	void setliter(float);
	void settime(int);
	void setpower(float);

	float getliter();
	int gettime();
	float getpower();

	tank();
	tank(float, float, int);
	tank(tank& obj);

	ostream& operator<<(ostream&);
	istream& operator>>(istream&);
};

