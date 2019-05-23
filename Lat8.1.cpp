#include<iostream>
using namespace std;
int main()
{
	struct waktu{
		int hh;
		int mm;
};
	struct selisih{
		int hh;
		int mm;
};
waktu wm,wk;
cout<< "Jam Masuk : ";
cin>> wm.hh;
cout<< "Menit Masuk : ";
cout<< wm.mm;
cout<< "Jam Keluar : ";
cin>> wk.hh;
cout<< "Menit Keluar : ";
cout<< wk.mm;
cout<< "--------------------\n";
cout<< "Waktu Masuk : "<< wm.hh<<":"<<wm.mm<< endl; 
cout<< "Waktu Keluar : "<< wk.hh<<":"<<wk.mm<< endl;

if(wk.mm-wm.mm<0){
		selisih.mm = 60-(wm.mm-wk.mm);
		selisih.hh = (wk.hh-wm.hh)-1;
	}
	else{
		selisih.hh = wk.hh-wm.hh;
		selisih.mm = wk.mm-wm.mm; 
}

cout<< "selisih waktunya adalah " << selisih.hh << " Jam "<<selisih.mm << " Menit ";
