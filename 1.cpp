#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
class school{
public:
int nim;
char highschool[50],university[50];
};

class skill{
public:
int p;
char namee[5][100];
float score[5];
};
main(){
int i,married;
char name[25],address[200],hoby [5][25],mr[100];
cout<<"Masukan Nama Anda :";gets(name);
cout<<"Masukan Address Anda :";gets(address);
for(i=1;i<=3;i++)
{
cout<<i<<endl;
cout<<"Masukan Hobbies Anda :";gets(hoby[i]);
}
cout<<"1.Sudah Menikah 2.Belum Menikah"<<endl;
cout<<"Pilih Satu Atau Dua :";cin>>married;
if(married==1){
strcpy(mr,"Sudah Menikah");
}
else if(married==2){
strcpy(mr,"Belum Menikah");
}
school saya;
cout<<"NIM  :";cin>>saya.nim;
cout<<"Key HighSchool :";gets(saya.highschool);
cout<<"University :";gets(saya.university);
skill sk;
for(sk.p=1;sk.p<=3;sk.p++)
{
cout<<sk.p<<endl;
cout<<"Skill Anda :";gets(sk.namee[sk.p]);
cout<<"Score Anda :";cin>>sk.score[sk.p];
}


clrscr();
cout<<"Nama Anda :"<<name<<endl;
cout<<"Alamata Anda :"<<address<<endl;
for(i=1;i<=3;i++){
cout<<hoby[i]<<endl;
}
cout<<endl;
cout<<mr<<endl;
cout<<"NIM	:"<<saya.nim<<endl;
cout<<"Key HighSchool :"<<saya.highschool<<endl;
cout<<"University:"<<saya.university<<endl;

for(sk.p=1;sk.p<=3;sk.p++)
{
cout<<"Skill Anda :"<<sk.namee[sk.p]<<endl;
cout<<"Score Anda :"<<sk.score[sk.p]<<endl;
}
getch();}
