using namespace std;

class Output {
	public :
		void cetak(){
			for (int i = 0; i < bulan; i++){
    cout << "Total pengeluaran bulan ke : " << i+1 <<" = "<<data_file[i]<<endl;
  }
		cout << "\nTotal keseluruhan pengeluaran : " << total;
    cout << "\nTotal tabungan : " << tabungan<<endl;
      
		}

		void getData(){
			ambil_data.open("api_data.txt");
      bool xbulan=true;
      bool xtotal=false;
			while(!ambil_data.eof()){
        if(xbulan){
          ambil_data >> bulan;
          xbulan=false;
          xtotal=true;
        }else if(xtotal){
          ambil_data >> total;
          xtotal=false;
        }else{
          ambil_data >> tabungan;
        }
			}
			ambil_data.close();
		

    ambil_data.open("pengeluaran.txt");
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
    int bulan,total,tabungan;
};