#include <iostream.h>
#include <conio.h>
#include <string.h>
void main ( )
{
int i=0;
int vokal=0;
int x,b;
char kalimat[20];

cout <<"Masukkan kalimat : ";cin.get(kalimat,250);
cout <<"Ubah kata :";cin>>b;
x=strlen(kalimat);
for(i=0;i<x;i++)
{
if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
cout<<b;
}
cout<<"Jumlah vokal : "<<vokal<<" huruf"<<endl;
for(i=0;i<x;i++){
cout<<kalimat[i];
}
getch( );
}
