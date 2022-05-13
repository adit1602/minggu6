#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	int alproTugas,alproUTS,alproUAS,pwebTugas,pwebUTS,pwebUAS,matdisTugas,matdisUTS,matdisUAS;
	float rata2Alpro, rata2Pweb, rata2Matdis;
};

class BaseProject{
  public:
  void input();
  void proses();
  void output();
  void cetak();

  private:
  mahasiswa mhs[2];
};
 void BaseProject::input(){
  for(int i = 1; i <= 2; i++){
    cout<<"Masukkan Nama                : ";
    getline(cin,mhs[i].nama);
    cout<<"Masukkan Nilai Tugas Alpro   : ";
    cin>>mhs[i].alproTugas;
    cout<<"Masukkan Nilai UTS           : ";
    cin>>mhs[i].alproUTS;
    cout<<"Masukkan Nilai UAS           : ";
    cin>>mhs[i].alproUAS;

    cout<<"Masukan Nilai Tugas Matdis   : ";
    cin>>mhs[i].matdisTugas;
    cout<<"Masukin Nilai UTS Matdis     : ";
    cin>>mhs[i].matdisUTS;
    cout<<"Masukin Nilai UAS Matdis     : ";
    cin>>mhs[i].matdisUAS;

    cout<<"Masukkan Nilai Tugas Pweb    : ";
    cin>>mhs[i].pwebTugas;
    cout<<"Masukkan Nilai UTS Pweb      : "; 
    cin>>mhs[i].pwebUTS;
    cout<<"Masukkan Nilai UAS Pweb      : ";
    cin>>mhs[i].pwebUAS;

  }
  //----------------------------------
}

void BaseProject::proses(){
	for(int i = 1; i <= 2; i++){
		mhs[i].rata2Alpro = (20/100*mhs[i].alproTugas) + (35/100*mhs[i].alproUTS) + (45/100*mhs[i].alproUAS);
		mhs[i].rata2Pweb = (20/100*mhs[i].pwebTugas) + (35/100*mhs[i].pwebUTS) + (45/100*mhs[i].pwebUAS);
		mhs[i].rata2Matdis = (20/100*mhs[i].matdisTugas) + (35/100*mhs[i].matdisUTS) + (45/100*mhs[i].matdisUAS);
	}

}

void BaseProject::output (){
	for(int i = 1; i <= 2; i++){
		cout<<endl;
  		cout<<"Nama Mahasiswa : "<<mhs[i].nama<<endl;
  		cout<<"Mata Kuliah || Tugas || UTS || UAS || Rata - rata ||"<<endl;
  		cout<<"===================================================="<<endl;
  		cout<<" Aplro       "<<mhs[i].alproTugas<<"   "<<mhs[i].alproUTS<<"   "<<mhs[i].alproUAS<<"   "<<mhs[i].rata2Alpro<<endl;
  		cout<<" PWEB        "<<mhs[i].pwebTugas <<"   "<< mhs[i].pwebUTS<<"   "<<mhs[i].pwebUAS<<"   "<<mhs[i].rata2Pweb<<endl;
  		cout<<" Matdis      "<<mhs[i].matdisTugas<<"   "<<mhs[i].matdisUTS<<"   "<<mhs[i].matdisUAS<<"  "<<mhs[i].rata2Matdis<<endl;
  		cout<<"===================================================="<<endl;
	}
 
  }