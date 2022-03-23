#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    
    int jumlah_beli, bayar, diskon, jumlah[100], harga[20],total[50];
    float total_semua;
    string nama_barang[10];

    cout<<"Masukan Banyak Pesanan Ayam :";
    cin>> jumlah_beli; 

    for (int i=0;i<jumlah_beli;i++){
        cout<<"\nMasukan Menu Olahan ke- "<<i+1<<"\n\n";
        cout<<"Olahan ayam : ";
        cin>>nama_barang[i];

        cout<<"Jumlah : ";
        cin>>jumlah[i];

        cout<<"Harga : ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i];
        total_semua += total[i]; 

    }
    cout<<"\n===============";
    cout<<"\nCatatan Belanja";
    cout<<"\n===============";

    cout<<"\nNo\tBarang\tJumlah\tHarga\tTotal\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(10)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<total[i]<<endl;
    }

    if(total_semua>=45000){
        diskon=0.10*total_semua;
    }else{
        diskon=0;
    }

    cout<<"Jumlah Bayar : Rp."<<total_semua<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_semua - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua-diskon))<<endl;
    return 0;
}
