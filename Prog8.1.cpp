#include<iostream>
using namespace std;
int main()
{
	struct waktu {
		int hh, mm;
	};
	waktu wm,wk;
	cout<< "Jam masuk : ";
	cin>> wm.hh;
	cout<< "Menit masuk : ";
	cin>> wm.mm;
	cout<< "Jam keluar : ";
	cin>> wk.hh;
	cout<< "Menit keluar : ";
	cin>> wk.mm;
	cout<< "Waktu masuk : "<<wm.hh<<":"<<wm.mm<<endl;
	cout<< "Waktu keluar : "<<wk.hh<<":"<<wk.mm<<endl;
}
