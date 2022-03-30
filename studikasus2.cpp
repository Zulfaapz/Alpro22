#include <iostream>
#include <conio.h>
using namespace std;
	class restoran {
	friend ostream&operator<<(ostream&, const restoran&);
	friend istream& operator>>(istream&, restoran&);
	public:
	restoran ();
	void jumlah, total, harga, jarak, menu, ongkir, diskon, bayar, subtotal;
	private:
	int a, b, c, d, e, f, g, h;
	int subtotal;
};
restoran::restoran(){
	cout<<"==========================================================="<<endl;
	cout<<"               PROGRAM RUMAH MAKAN DELIVERY                "<<endl;
	cout<<"==========================================================="<<endl;
	
