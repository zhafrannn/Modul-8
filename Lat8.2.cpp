#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<< "Masukan banyak mahasiswa : ";
	cin>> n;
	string nama[n],huruf[n];
	int nim[n],umur[n],total[n];
	for(int j=0;j<n;j++){
		cout<< "Mahasiswa ke-"<<(j+1)<< " : \n";
		cout<< "Nama : ";
		cin>> nama[j];
		cout<< "NIM : ";
		cin>> nim[j];
		cout<< "Umur : ";
		cin>> umur[j];
		cout<< "Total Nilai : ";
		cin>> total[j];
		if(total[j]>0 && total[j]<=100){
			cin>> total[j];
		}
		else{
			total[j]=0;
			cin>> total[j]; 
		}
		if(total[j]>80 && total[j]<=100){
			huruf[j]= 'A';
		}
		else if(total[j]>70 && total[j]<=80){
			huruf[j]='B';
		}
		else if(total[j]>60 && total[j]<=70){
			huruf[j]='C';
		}
		else if(total[j]>50 && total[j]<=60){
			huruf[j]='D';
		}
		else if(total[j]>0 && total[j]<=50){
			huruf[j]='E';
		}
	}
	cout<< "No.\t\tNama\t\t\tNIM\t\tUmur\t\tTotal Nilai\tNilai Huruf\n";
	for(int i=0;i<n;i++){
		cout<< "i\t\t"<< nama[i] <<"\t\t\t"<< nim[i]<< "\t\t"<< umur[i]<<"\t\t\t"
		<< total[i] << "\t\t"<< huruf[i] << endl;
	}
}
