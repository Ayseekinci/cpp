#include<iostream>
using namespace std;

int main(){
	
	//ekrana yaz� yazd�rma
	cout<<"Merhaba Dunya"<<endl;
	
	//giridi�imiz de�i�keni yazd�rma
	int a=25;
	cout<<"a nin degeri : "<<a<<endl;
	
	//girdi�imiz say�larda toplama yapma
	int x,y,z,toplam;
	x=10;
	y=15;
	z=20;
	toplam=x+y+z;
	cout<<"Toplam : "<<toplam<<endl;
	
	//kullan�c�dan de�er alma
	int i;
	cout<<"Bir sayi giriniz : "<<endl;
	cin>>i;
	cout<<"Girilen sayi :"<<i<<endl;
	
	//kullan�c�dan al�nan de�erleri toplama
	int k,l,m;
	cin>>k>>l>>m;
	cout<<"girilen sayilar :"<<k+l+m<<endl;
	
	//string veri tiplerini yazd�rma
	string str1="Bu bir stringtir.";
	string str2="Buda bir stringtir.";
	
	string str3=str1+str2;
	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	cout<<str3;
	

	
	
	return 0;
}
