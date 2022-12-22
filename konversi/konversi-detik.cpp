#include<iostream>
using namespace std;


int main(){
	int detik, menit, jam, hari;
	cout<<"Program C++ Konversi Dari Detik Menjadi Hari, Jam, Menit, dan Detik"<<endl;
	cout<<"============================"<<endl;
	cout<<"Masukan detik : "; cin>> detik;
	
	hari = detik/86400;
	jam = detik/3600;
	menit = detik/60;
	detik = detik/1;

	cout<<"=====Hasil Konversinya====="<<endl;
	cout<<"Hari  : "<<hari<<endl;
	cout<<"Jam   : "<<jam<<endl;
	cout<<"Menit : "<<menit<<endl;
}