#include <iostream>
using namespace std;
 
void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah);//function prototype
 
int main(){
    int hasilnaik=0, hasilturun=0, nilai=10;
 
    naik_turun(hasilnaik, hasilturun, nilai, 3);
    cout<<"Hasil Naik = "<<hasilnaik<<endl;
    cout<<"Hasil Turun = "<<hasilturun<<endl;
 
    return 0;
}
 
void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah){
    penaikan = nilai + jumlah;
    penurunan = nilai - jumlah;
}
