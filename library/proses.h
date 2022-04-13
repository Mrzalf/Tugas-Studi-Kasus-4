using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool usaku = true;
			while(!ambil_data.eof()){
				if (usaku){
					ambil_data >> saku;
					usaku = false;
        }else{
					ambil_data >> bulan;
				}
			}
			ambil_data.close();
		}

		void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data<<bulan<<endl;
			tulis_data.close();
      tulis_data.open("pengeluaran.txt");
			tulis_data.close();
			for (int i = 0; i < bulan; i++){ 
      cout << "\nMasukkan pengeluaran bulan ke :" << i + 1;
      cout << "\nMasukkan biaya keperluan kuliah : "; cin >> kuliah;
      cout << "Masukkan biaya jajan : "; cin >> jajan;
      pengeluaran = kuliah + jajan;
      total = total + pengeluaran;
      sisa = saku - pengeluaran;
      cout << "\nSisa uang saku bulan ke : " << i+1 << " = " << sisa;
      tabungan=tabungan+sisa;
    cout << "\n------------------------------------\n";
        
      tulis_data.open("pengeluaran.txt",ios::app);
			tulis_data << pengeluaran << endl;
			tulis_data.close();
        }  

  
			tulis_data.open("api_data.txt",ios::app);
			tulis_data << total << endl;
			tulis_data << tabungan;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int saku,bulan,kuliah,jajan,pengeluaran,sisa;
    int total=0;
    int tabungan=0;
};