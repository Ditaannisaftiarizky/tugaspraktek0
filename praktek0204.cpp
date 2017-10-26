#include <iostream>
using namespace std;

int main (){
	
	double Luas_rumah = 42;
	double Lantai_parket = 193*1215;
	double Luas_1box = Lantai_parket*8/1000000;
	double jml_box_paket, Biaya_parket, Biaya_pasang,
	Totalbyr;
	
	cout << "Luas Rumah :" << Luas_rumah<<" m2 "<<endl;
	cout << "Luas 1 box Parket :"
	<< Luas_1box<< "m2"<<endl;
	
	jml_box_parket = Luas_rumah/Luas_1box;
	cout<< "Jumlah Box Parket :" <<jml_box_parket<<endln;
	
	Biaya_parket = jml_box_parket*500;
	cout << " Biaya Parket(Rp) :"<<Biaya_parket<<endl;
	
	Biaya_pasang = Luas_rumah*20;
	cout << "Biaya Pasang(Rp) :"<<Biaya_pasang<<endl;  
}
