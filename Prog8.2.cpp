#include<iostream>
using namespace std;
int main()
{
	int z;
	struct dataMhs {
		char nama[20];
		long int nim;
		float nilai;
	};
	dataMhs mhs[10];
	cout<< "Masukan 3 data Mahasiswa\n";
	cout<< "========================\n";
	for(z=0;z<3;z++){
		cout<< "\nMahasiswa ke-"<<(z+1)<<"\n";
		cout<< "-----------------------\n";
		cout<< "Nama : ";
		cin>> mhs[z].nama;
		cout<< "NIM : ";
		cin>>mhs[z].nim;
		cout<< "Nilai : ";
		cin>> mhs[z].nilai;
	}
}
