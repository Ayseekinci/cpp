#include<iostream>
using namespace std;

int main(){
	
	//ekrana yazý yazdýrma
	cout<<"Merhaba Dunya"<<endl;
	
	//giridiðimiz deðiþkeni yazdýrma
	int a=25;
	cout<<"a nin degeri : "<<a<<endl;
	
	//girdiðimiz sayýlarda toplama yapma
	int x,y,z,toplam;
	x=10;
	y=15;
	z=20;
	toplam=x+y+z;
	cout<<"Toplam : "<<toplam<<endl;
	
	//kullanýcýdan deðer alma
	int i;
	cout<<"Bir sayi giriniz : "<<endl;
	cin>>i;
	cout<<"Girilen sayi :"<<i<<endl;
	
	//kullanýcýdan alýnan deðerleri toplama
	int k,l,m;
	cin>>k>>l>>m;
	cout<<"girilen sayilar :"<<k+l+m<<endl;
	
	//string veri tiplerini yazdýrma
	string str1="Bu bir stringtir.";
	string str2="Buda bir stringtir.";
	
	string str3=str1+str2;
	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	cout<<str3;
	

	
	
	return 0;
}
