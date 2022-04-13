using namespace std;
class input{

public :
  void cetak(){
    cout<<"====PENGELUARAN ANDI==== \n";
    cout<<"Masukan jumlah uang : ";cin>>uang;
    cout<<"Masukan jumlah bulan menabung : ";cin>>bulan;
  }

  void toFile(){
      tulis_data.open("../Pra_Data/input.txt");
      tulis_data<<uang<<endl;
      tulis_data<<bulan<<endl;
      tulis_data.close();
    }
    void getData(){
			ambil_data.open("../dummy/out_proses.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
	  }

private : 
  ofstream tulis_data;
  int uang, bulan;
};