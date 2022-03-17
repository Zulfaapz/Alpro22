#include<iostream>
#include<math.h>
using namespace std;
int jumlah(int a, int b){
	int c=a+b;
	return c;
}
int kurang(int a, int b){
	int c=a-b;
	return c;
}
int kali(int a, int b){
	int c=a*b;
	return c;
}
int bagi(int a, int b){
	int c=a/b;
	return c;
}
int pangkat(int a, int b){
	int c=pow(a,b);
	return c;
}
int akar(int a){
	int c=sqrt(a);
	return c;
}
int main()
{
	int a, b;
	int total, pil;
	char x;
	//Nama : Zulfaa Putri Az Zahra
	//NIM : 2100018202
	do{
	cout<<"-------PROGRAM KALKULATOR-------"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Perpangkatan"<<endl;
	cout<<"6. Akar Pangkat"<<endl;
	cout<<"Masukan Pilihan Operasi : "; cin>>pil;
	if (pil == 1)
	{
		cout<<"---------Operasi Penjumlahan---------"<<endl;
		cout<<"Masukan bilangan pertama : ";cin>>a;
		cout<<"Masukan bilangan kedua : ";cin>>b;
		cout<<"Hasil penjumlahan "<<a<<" dan "<<b<<" adalah "<<jumlah(a, b)<<endl;
	}
	else if (pil == 2)
	{
		cout<<"---------Operasi Pengurangan---------"<<endl;
		cout<<"Masukan bilangan pertama : ";cin>>a;
		cout<<"Masukan bilangan kedua : ";cin>>b;
		cout<<"Hasil pengurangan "<<a<<" dan "<<b<<" adalah "<<kurang(a, b)<<endl;
	}
	else if (pil == 3)
	{
		cout<<"---------Operasi Perkalian---------"<<endl;
		cout<<"Masukan bilangan pertama : ";cin>>a;
		cout<<"Masukan bilangan kedua : ";cin>>b;
		cout<<"Hasil perkalian "<<a<<" dan "<<b<<" adalah "<<kali(a, b)<<endl;
	}
	else if (pil == 4)
	{
		cout<<"---------Operasi Pembagian---------"<<endl;
		cout<<"Masukan bilangan pertama : ";cin>>a;
		cout<<"Masukan bilangan kedua : ";cin>>b;
		cout<<"Hasil pembagian "<<a<<" dan "<<b<<" adalah "<<bagi(a, b)<<endl;
	}
	else if (pil == 5)
	{
		cout<<"---------Operasi Perpangkatan---------"<<endl;
		cout<<"Masukan bilangan  : ";cin>>a;
		cout<<"Masukan jumlah pangkat  : ";cin>>b;
		cout<<"Hasil dari "<<a<<" pangkat "<<b<<" adalah "<<pangkat(a ,b)<<endl;
	}
	else if (pil == 6)
	{
		cout<<"---------Operasi Akar Pangkat---------"<<endl;
		cout<<"Masukan bilangan  : ";cin>>a;
		cout<<"Hasil akar pangkat dari "<<a<<" adalah "<<akar(a)<<endl;
	}
	else
	{
	cout<<"Inputan salah!"<<endl;
	}
	cout<<"Ingin melakukan operasi lain? (y/n)";cin>>x;
}
	while(x=='y' || x=='Y');
	cout<<"Keluar dari program...."<<endl;
	return 0;
	
}

