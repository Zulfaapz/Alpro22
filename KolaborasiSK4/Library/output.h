using namespace std;

class Output{
	public:
		void cetak(){
      cout<<"Pengeluaran \n";
			cout<<"Uang Saku	->"<<data_file[2]<<endl;
      cout<<"Uang Kuliah Dan Jajan->"<<data_file[3]<<endl;
      cout<<"Total pengeluaran	->"<<data_file[1]<<endl;
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
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};