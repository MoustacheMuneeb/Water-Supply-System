#include"Normal_Usage.h"
#include<fstream>
int main()
{
	ofstream myfile("Data.txt");
	Normal_Usage obj;
	Overflow obj1;
	tank obj2;
	int min=0;
	float price = 0;
	float power = 0, liter =0, Hoverflow = 0, Hosoverflow = 0,Ioverflow=0;
	float nhouse = 0, nhospital = 0, nindustry = 0;
	cout << "Enter normal usage of Water in House :" << endl;
	cin >> nhouse;
	myfile << "Enter normal usage of Water in House :" << nhouse <<"L"<< endl;
	obj.setusageinhouse(nhouse);
	cout << "Enter normal usage of Water in Industry :" << endl;
	cin >> nindustry;
	myfile << "Enter normal usage of Water in Industry :" << nindustry << "L" << endl;
	obj.setusageinindustry(nindustry);
	cout << "Enter normal usage of Water in Hospital :" << endl;
	cin >> nhospital;
	myfile << "Enter normal usage of Water in Hospital :" << nhospital << "L" << endl;
	obj.setusageinhospital(nhospital);
	cout << "Enter Overflow of Water in House :" << endl;
	cin >> Hoverflow;
	myfile << "Enter Overflow of Water in House :" << Hoverflow << "L" << endl;
	obj1.setoverflowinhouse(Hoverflow);
	cout << "Enter Overflow of Water in Hospital :" << endl;
	cin >> Hosoverflow;
	myfile << "Enter Overflow of Water in Hospital :" << Hosoverflow << "L" << endl;
	obj1.setoverflowinhospital(Hosoverflow);
	cout << "Enter Overflow of Water in Industry :" << endl;
	cin >> Ioverflow;
	myfile << "Enter Overflow of Water in Industry :" << Ioverflow << "L" << endl;
	obj1.setoverflowinindustry(Ioverflow);
	cout << "Tank Limit is " << endl;
	cin >> liter;
	myfile<< "Tank Limit is " << liter << "L" << endl;
	power = liter * 5;
	cout << "Power required for filling :" << power <<" Watt"<< endl;
	myfile<< "Power required for filling :" << power <<" Watt"<< endl;
	if (power > 20)
	{
		price = 50000;
		min = 60;
		cout << "Time taken for filling :" << min << endl;
		myfile<< "Time taken for filling :" << min << endl;
		cout<< "Budget required (Rs):" << price << endl;
		myfile << "Budget required (Rs):" << price << endl;
	}
	else
	{
		price = 25000;
		min = 30;
		cout << "Time taken for filling :" << min << endl;
		myfile << "Time taken for filling :" << min << endl;
		cout<< "Budget required (Rs):" << price << endl;
		myfile << "Budget required (Rs):" << price << endl;
	}
	if (Hosoverflow + Hoverflow + Ioverflow == liter)
	{
		cout << "Tank is full" << endl;
		myfile<< "Tank is full" << endl;
	}
	else if(Hosoverflow+Hoverflow+Ioverflow>liter)
	{
		cout << "Tank is overflowing" << endl;
		myfile<< "Tank is overflowing" << endl;
		cout << "Need another tank " << endl;
		myfile<< "Need another tank " << endl;
	}
	else
	{
		cout << "Tank is not filled " << endl;
		myfile<< "Tank is not filled " << endl;
	}
}