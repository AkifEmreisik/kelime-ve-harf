//getche() fonksiyonunun kullanýmý 
//Burada önemli olan þey while döngüsünden önce alýnmasýdýr 

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int harf=0;
int kelime=1;
char a= 'b'; //getchenin en önemli yerlerinden bii de burasýdýr yok bir deðer olmayacak whilea girmez yoksa 
cout<<"Kelime gir";
while(a !='\r'){ //taþasýya kadar soldan saða oku demek yani girilen bitince saðýnda ne kalacak boþluk onu almayacaksýn demek 
	a=getche(); //cin yaparsan olmaz geche þart soldan saða okuyacak yani mantýða ters cin olmasý 

	if(a==' '){
		kelime++;
	}
	else{
		harf++;
	}
}
	
cout<<"Kelime Sayisi: "<<kelime<<"  Harf Sayisi: "<<harf-1;

	
	
	
	return 0;
}
