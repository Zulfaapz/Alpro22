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
	
	
//output
	cout<<"====================================\n";
		
		cout<<"struk akan di cetak\n";
		ofstream kasir;
		kasir.open("strukblnjaa.txt", ios::app);
		kasir<<"==========================\n";
		kasir<<"STRUK BELANJA\n";
		kasir<<"==========================\n";
		for (int i=0; i<a; i++){
			ksr[1].total = ksr[i].kuantitas * ksr[i].harga;
			kasir<<ksr[i].nama_barang<<endl;
			kasir<<ksr[i].kuantitas<<"X"<<ksr[i].harga<<"="<<ksr[1].total<<endl;
			ksr[1].total += ksr[i].total;
		}
		kasir<<"=========================\n";
		kasir<<"Total belanja : "<<ksr[1].total;
		kasir<<"Terimakasih telah Berbelanja\n";
		kasir<<"=========================\n";
		kasir<<"\n";
		kasir.close();
	}
}
	
