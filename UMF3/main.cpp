#include "slau.h"

using namespace std;



int main() {
	//SLAU slv = SLAU("net", "cond1", "cond2", 0); // LOS
	SLAU slv = SLAU("net", "cond1", "cond2", 1); // LU


	slv.omega = 1e-4;



	cout << "===========lyam=1e+2============" << endl;
	slv.lyam = 100;
	{
		cout << "__________sigma=0_____________" << endl;
		slv.sigma = 0;
		cout << endl << "8.81e-12" << endl;
		slv.hi = 1e-10;
		slv.do_smth();
		cout << endl << "1e-11" << endl;
		slv.hi = 1e-11;
		slv.do_smth();
		cout << endl << "1e-10" << endl;
		slv.hi = 1e-10;
		slv.do_smth(); }
	{cout << "__________sigma=1e4_____________" << endl;
	slv.sigma = 1e+4;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }
	{cout << "__________sigma=1e8_____________" << endl;
	slv.sigma = 1e+8;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }
	/*
	cout << "===========lyam=1e+4=========" << endl;
	slv.lyam = 1e+4;
	{
		cout << "__________sigma=0_____________" << endl;
		slv.sigma = 0;
		cout << endl << "8.81e-12" << endl;
		slv.hi = 8.81e-12;
		slv.do_smth();
		cout << endl << "1e-11" << endl;
		slv.hi = 1e-11;
		slv.do_smth();
		cout << endl << "1e-10" << endl;
		slv.hi = 1e-10;
		slv.do_smth(); }
	{cout << "__________sigma=1e4_____________" << endl;
	slv.sigma = 1e+4;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }
	{cout << "__________sigma=1e8_____________" << endl;
	slv.sigma = 1e+8;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }

	cout << "============lyam=8e+5==============" << endl;
	slv.lyam = 8e+5;
	{
		cout << "__________sigma=0_____________" << endl;
		slv.sigma = 0;
		cout << endl << "8.81e-12" << endl;
		slv.hi = 8.81e-12;
		slv.do_smth();
		cout << endl << "1e-11" << endl;
		slv.hi = 1e-11;
		slv.do_smth();
		cout << endl << "1e-10" << endl;
		slv.hi = 1e-10;
		slv.do_smth(); }
	{cout << "__________sigma=1e4_____________" << endl;
	slv.sigma = 1e+4;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }
	{cout << "__________sigma=1e8_____________" << endl;
	slv.sigma = 1e+8;
	cout << endl << "8.81e-12" << endl;
	slv.hi = 8.81e-12;
	slv.do_smth();
	cout << endl << "1e-11" << endl;
	slv.hi = 1e-11;
	slv.do_smth();
	cout << endl << "1e-10" << endl;
	slv.hi = 1e-10;
	slv.do_smth(); }
*/

	ofstream fout("out.txt");
	for (int i = 0; i < slv.m * 2; i++)
		fout << slv.q[i] << endl;
	//cout << "time=" << slv.end_time/1000 ;
	system("pause");
	return 0;

}

