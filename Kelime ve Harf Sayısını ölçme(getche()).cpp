//getche() fonksiyonunun kullan�m� 
//Burada �nemli olan �ey while d�ng�s�nden �nce al�nmas�d�r 

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int harf=0;
int kelime=1;
char a= 'b'; //getchenin en �nemli yerlerinden bii de buras�d�r yok bir de�er olmayacak whilea girmez yoksa 
cout<<"Kelime gir";
while(a !='\r'){ //ta�as�ya kadar soldan sa�a oku demek yani girilen bitince sa��nda ne kalacak bo�luk onu almayacaks�n demek 
	a=getche(); //cin yaparsan olmaz geche �art soldan sa�a okuyacak yani mant��a ters cin olmas� 

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
