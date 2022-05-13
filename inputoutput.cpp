#include "../base.h"

void BaseProject::input(){
  for(int i = 1; i <= 2; i++){
    cout<<"Masukkan Nama                : ";
    getline(cin,mhs[i].nama);
    cout<<"Masukkan Nilai Tugas Alpro   : ";
    getline(cin,mhs[i].alproTugas);
    cout<<"Masukkan Nilai UTS ";
    getline(cin,mhs[i].alproUTS);
    cout<<"Masukkan Nilai UAS ";
    getline(cin,mhs[i].alproUAS);

    getline(cin,mhs[i].nama);
    cout<<"Masukan Nama                 : ";
    getline(cin,mhs[i].matdisTugas);
    cout<<"Masukan Nilai Tugas Matdis   : ";
    getline(cin,mhs[i].matdisUTS);
    cout<<"Masukin Nilai UTS Matdis     : ";
    getline(cin,mhs[i].matdisUAS);
    cout<<"Masukin Nilai UAS Matdis     : ";

    cout<<"Masukan Nama                 : ";
    cout<<"Masukkan Nilai Tugas Pweb    : ";
    getline(cin,mhs[i].pwebTugas);
    cout<<"Masukkan Nilai UTS Pweb      : "; 
    getline(cin,mhs[i].pwebUTS);
    cout<<"Masukkan Nilai UAS Pweb      : ";
    getline(cin,mhs[i].pwebUAS);

  }
  //----------------------------------
}


void BaseProject::output (){
	for(int i = 1; i <= 5; i++){
		cout<<endl;
  		cout<<"Nama Mahasiswa : "<<mhs[i].nama<<endl;
  		cout<<"Mata Kuliah || Tugas || UTS || UAS || Rata - rata ||"<<endl;
  		cout<<"===================================================="<<endl;
  		cout<<" Aplro       "<<mhs[i].alproTugas<<"   "<<mhs[i].alproUTS<<"   "<<mhs[i].alproUAS<<"   "<<mhs[i].rata2Alpro<<endl;
  		cout<<" PWEB        "<<mhs[i].pwebTugas <<"   "<< mhs[i].pwebUTS<<"   "<<mhs[i].pwebUAS<<"   "<<mhs[i].rata2Pweb<<endl;
  		cout<<" Matdis      "<<mhs[i].matdisTugas<<"   "<<mhs[i].matdisUTS<<"   "<<mhs[i].matdisUAS<<"  "<<mhs[i].rata2Matdis<<endl;
  		cout<<"===================================================="<<endl;
	}
int main(){
    BaseProject base;
    base.input();
    base.output();
      return 0;
  }