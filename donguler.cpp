
#include<iostream>
using namespace std;
int main() {

	cout<<"IF ELSE PAROLA ORNEGI"<<endl;
	
	string kullaniciadi="Ayseekinci";
	string parola="asdasdasd";
	
	string inputkul;
	cout<<"Lutfen kullanici adinizi giriniz "<<endl;
	cin>>inputkul;
	
	string inputpar;
	cout<<"Lutfen parolanizi giriniz "<<endl;
	cin>>inputpar;
	
	if(kullaniciadi==inputkul &&parola==inputpar){
		cout<<"Giris saglandi"<<endl;
	}
	else if(kullaniciadi!=inputkul &&parola==inputpar){
		cout<<"Kullanici adinizi kontrol ediniz.."<<endl;
	}
	else if (kullaniciadi==inputkul &&parola!=inputpar){
		cout<<"Parolanizi kontrol ediniz.."<<endl;
	}
	else
		cout<<"Giris saglanamadi....";
	



	int Sayi1,Sayi2;
	string islem;
	
	cout<<"IF ELSE HESAP MAKINESI..."<<endl;
	
	cout<<"Sayi 1:";
	cin>>Sayi1;
	cout<<"Sayi 2:";
	cin>>Sayi2;
	
	cout<<"1.islem : Toplama"<<endl;
	cout<<"2.islem : Cikarma"<<endl;
	cout<<"3.islem : Carpma"<<endl;
	cout<<"4.islem : Bolme"<<endl;
	
	cin>>islem;
	
	if(islem=="1"){
    	
		cout<<"Toplama : "<< Sayi1+Sayi2<<endl;
	}
	else if(islem=="2"){
		cout<<"Cikarma : "<< Sayi1-Sayi2<<endl;
	}
	else if(islem=="3"){
		cout<<"Carpma : "<< Sayi1*Sayi2<<endl;
	}
	else if(islem=="4"){
		cout<<"Bolme : "<< float(Sayi1)/Sayi2<<endl;
	}
	else
	cout<<"Yanlis secim yaptiniz...";
	
	
	
	
	cout<<"WHILE ORNEGI"<<endl;
	
	int x=1,y=1;
	while(x<10 && y<5){
		cout<<"x:"<<x<<"y:"<<y<<endl;
		x++;
		y++;
	}
	
	
	
	
	cout<<"DO WHILE ORNEGI"<<endl;
	
	string parola="Ayse123";
	string input;
	
	do{
	
		cout<<"Parola giriniz...";
    	cin>>input;
	
	}while(input!=parola);
		cout<<"Parola dogru...";
	
	
	
	
	
	cout<<"FOR FAKTORIYEL ORNEGI"<<endl;
	
	int sayi,i=1,fak=1;
	cout<<"Sayi giriniz:";
	cin>>sayi;
	
	for(i;i<=sayi;i++){
		fak*=i;
			
	}
	cout<<"fak :"<<fak;


	
	
	return 0 ;
	
}
