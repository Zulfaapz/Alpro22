using namespace std;

class Proses{
  void cetak(){
  
  }

  void getData(){
    ambil_data.open(../dummy/input.txt);
    bool ayam_goreng = true;
    while(!ambil_data.eof()){
      if (ayam_goreng){
        ambil_data >>banyak_ayamgoreng;
        ayam_goreng = false;
      }
      else{
        ambil_data >>banyak_ayambk;
      }
    }
    ambil_data.close();
  }

  void toFile(){
    int total = (hrg_ayamgr * banyak_ayamgoreng)+(hrg_ayambk * banyak_ayambk);
    float batas = 50000;
    float t2 = float(total);
    flot diskon = (t2*0.15)-5000;
    
    if (total >= batas)
      t2 = t2-diskon;
  }

  private:
  ofstream tulis_data;
  int hrg_ayamgr = 17.000;
  int hrg_ayambk = 25000;

};