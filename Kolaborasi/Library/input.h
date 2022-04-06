using namespace std;
class input{
public :
  void cetak(){
    cout<<"APLIKASI PENJUALAN AYAM \n";
    cout<<"========================\n";
    cout<<"Menu yang tersedia : \n";
    cout<<" 1. Ayam Geprek Rp. 21000 \n";
    cout<<" 2. Ayam Goreng Rp. 17000 \n";
    cout<<" 3. Udang Goreng Rp. 19000 \n";
    cout<<" 4. Cumi Goreng Rp. 20000 \n";
    cout<<" 5. Ayam Bakar Rp. 25000 \n";
    cout<<"Pesan Ayam Goreng : ";
    cin>>bnyk_aymGr;
    cout<<"Pesan Ayam Bakar : ";
    cin>>bnyk_aymBr;
  }

  void toFile(){
      tulis_data.open("../pra_data/input.txt");
      tulis_data<<bnyk_aymGr<<endl;
      tulis_data<<bnyk_aymBk;
      tulis_data.close();
    }

private : 
  ofstream tulis_data;
  int bnyk_aymGr, bnyk_aymBk;
};