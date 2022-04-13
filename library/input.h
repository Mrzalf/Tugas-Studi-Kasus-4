using namespace std;

class Input {
	public :
		void cetak(){
			 cout << "Masukkan uang saku : "; cin >> saku;
       cout << "Masukkan Bulan : "; cin >> bulan;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
      tulis_data << saku << endl;
      tulis_data << bulan;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int saku, bulan;
};