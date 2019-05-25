#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
 
void rep(char * , char , char );
 
 
 
int main(){
char nama[225];
char f,r;
cout<<"Masukkan Sebuah String: ";gets(nama);
cout<<"karakter Yang di Cari: ";cin>>f;
cout<<"Karakter Penggati: ";cin>>r;
 
rep(nama,f,r);
cout<<"String Hasil Replace: "<<nama;
 
getch();
return 0;

 
}
 
void rep(char * data, char find, char replace){
 
while(*data!='\0'){
if (*data==find)
*data=replace;
data++;
 
  }
 
}
