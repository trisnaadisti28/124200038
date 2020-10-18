#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
	char nama [30], nim[10];
	float nilai1, nilai2, totalnilai;

	
	cout<<"MENGHITUNG NILAI RATA-RATA UTS DAN UAS"<<endl;
	cout<<endl;
	cout<<"Nama   : ";//Trisna Adisti
	gets(nama);
	cout<<"NIM    : ";//124200038
	cin>>nim;
	cout<<endl;
	cout<<"Masukkan Nilai UTS    : "; cin>>nilai1;
	cout<<"Masukkan Nilai UAS    : "; cin>>nilai2;

	totalnilai=((nilai1+nilai2)/2);
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Mahasiswa Atas Nama    : "<<nama<<endl;
	cout<<"NIM 	               : "<<nim<<endl;
	cout<<endl;
	cout<<"Memperoleh Total Nilai :"<<totalnilai<<endl;
	
	getch ();
}
