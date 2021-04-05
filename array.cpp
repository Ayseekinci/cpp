#include<iostream>
using namespace std;
int main(){
	/* Array ornek1
	
	int dizi[5];
	cout<<"Lutfen 5 tane  1 ie 9 arasinda rastgele sayilar giriniz... ";
	for(int i=0 ;i<5;i++){
		cin>>dizi[i]; 
}
	cout<<"Herhangi bir karakter giriniz.."<<" ";
	char karakter;
	cin>>karakter;
	for(int i=0;i<5;i++){
		cout<<i<<"\t"<<dizi[i];
		for(int j=0;j<dizi[i];j++){
			cout<<karakter;
		}
		cout<<endl;
		
	}
	*/

	/* Array ornek2
	
	int dizi1[4],dizi2[4];
	cout<<"1.Dizinin Elamanlarini giriniz..";
	for(int i=0; i<5;i++){
		cin>>dizi1[i];
	}
	cout<<"2.Dizinin elamanlaririni giriniz..";
	for(int i=0; i<5;i++){
		cin>>dizi2[i];
	}
	double dizi3[4];
	for(int i=0;i<5;i++){
		
		dizi3[i]=double(dizi1[i]*dizi2[i])/(dizi1[i]+dizi2[i]);
	
	}
	
	for(int i=0;i<5;i++){
		cout<<dizi3[i]<<" ";
	}
	cout<<endl;
	
*/
	/*Cok boyutlu diziler ornek1
	
	int dizi[3][4]={{10,20,30,40},{5,8,9,4},{3,11,8,15}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<dizi[i][j]<<"\t";
		}
		cout<<endl;
	}
*/

	/*Çok botuylu diziler (not ortalamasý)
	
	float notlar[5][3];
	
	for(int ogrenciNo=0;ogrenciNo<5;ogrenciNo++){
		
		cout<<"Ogrenci No : "<<ogrenciNo<<endl;
		cout<<"Vize 1 :";
		cin>>notlar[ogrenciNo][0];
		
		cout<<"Vize 2 :";
		cin>>notlar[ogrenciNo][1];
		
		cout<<"Final : ";
		cin>>notlar[ogrenciNo][2];
		cout<<endl;
	}
	
	float ortalama;
	for(int ogrenciNo=0;ogrenciNo<5;ogrenciNo++){
		ortalama=(notlar[ogrenciNo][0]*0.25)+(notlar[ogrenciNo][1]*0.25)+(notlar[ogrenciNo][2]*0.50);
		
		cout<<ogrenciNo<<" Ogrencinin ortalamasi "<<ortalama<<endl;
	}
	
	return 0;
*/
	
	
}

