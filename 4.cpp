#include <iostream.h>
#include <conio.h>

int main()
{
cout<<("input : ");
int n;
cin>>n;
if (n > 2){
for (int i=0; i < n; i++){
for (int j=0; j < n; j++) {
if ((i==0) || (i==n-1) || (j==0) || (j==n-1)) {
cout<<("=");
}


else {
cout<<("+");
}

}
cout<<"\n";
}
}
getch();
}
