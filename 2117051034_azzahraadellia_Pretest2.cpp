#include <iostream>
using namespace std;
int main (){

	//---------FormatInput--------//
    string variabel_nama;
    string variabel_goldar;
    double variabel_BeratBadan;
    double variabel_TinggiBadan;
    double variabel_BeratBadanIdeal;
    
    //input
    cout<<"Nama              : ";
    getline(cin,variabel_nama);
    cout<<"Golongan Darah    : " ;
    getline(cin,variabel_goldar);
    cout<<"Berat Badan       : ";
    cin>> variabel_BeratBadan;
    cout<<"Tinggi Badan      : ";
    cin>> variabel_TinggiBadan;
	variabel_BeratBadanIdeal = variabel_TinggiBadan - 100 - ((variabel_TinggiBadan -100)* 10/100);
	cout<<endl;
	
	//output
	cout
	<<"Nama : "<<variabel_nama<<endl
	<<"Golongan Darah : "<<variabel_goldar<<endl
	<<"Berat Badan : "<<variabel_BeratBadan<< "kg"<<endl
	<<"Tinggi Badan : "<<variabel_TinggiBadan<< "cm"<<endl
    <<"Berat badan ideal : "<<variabel_BeratBadanIdeal<< "kg";
    cout<<endl;
	return 0;
}
	
