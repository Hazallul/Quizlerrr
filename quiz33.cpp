#include <stdio.h>
#include <stdlib.h>
int main() {
//Emir Karaman 
int uzunluk,satir,sutun;
printf("Kenar uzunlugu giriniz:\n");
scanf("%d",&uzunluk);
for(satir=1;satir<=uzunluk;satir++){
for(sutun=1;sutun<=uzunluk;sutun++){
if(satir==uzunluk||satir==1||sutun==1||sutun==uzunluk||satir==sutun&&satir<=uzunluk/2||satir+sutun==uzunluk+1&&satir<=uzunluk/2){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}


 return 0;
}
