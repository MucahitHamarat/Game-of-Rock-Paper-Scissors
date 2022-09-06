#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int T=1;
int K=2;
int M=3; 
int i;
int Oyuncu =0; 
int Bilgisayar =0;
int secim;
srand(time(NULL));
printf("Rock=1 , Paper= 2, ve Scissors= 3\n");

 for(i=1;i<5;i++){
printf("Make your choise:"); 
scanf("%d",&secim);
if (secim<=3) // 3'ten büyük bir sayı girerse hiç içeri girmeyip direkt uyarsın else ile
{
    int bilgisayar=rand()%3+1;
if(secim==1){
if(bilgisayar==1){

printf("Both of you choose the ROCK,drawn!\n");
}
if(bilgisayar==2){
printf("You choose the ROCK, computer choose the PAPER, it won!\n");
Bilgisayar= Bilgisayar + 1;
}
if(bilgisayar==3){
printf("You choose the ROCK,computer choose the SCISSORS, you won!\n");
Oyuncu = Oyuncu + 1;
}
}
else  if(secim==2){
if(bilgisayar==2){
printf("Both of you choose the PAPER, drawn!\n");
}
if(bilgisayar==3){
printf("You choose the PAPER, computer choose the SCISSORS, it won!\n");
Bilgisayar= Bilgisayar + 1;
}
if(bilgisayar==1){
printf("You choose the PAPER, computer choose the ROCK,you won!\n");

Oyuncu = Oyuncu + 1;
}
}
else if(secim==3){
if(bilgisayar==3){
printf("Both you choose the SCISSORS,drawn!\n");
}
if(bilgisayar==2){
printf("You choose the SCISSORS, computer choose the PAPER, you won!\n");
//
Oyuncu = Oyuncu + 1;
}
if(bilgisayar==1){
printf("You choose the SCISSORS, computer choose the ROCK, it won!\n");
Bilgisayar= Bilgisayar + 1;
}
}

}

else 
{
printf("Please type a number between 1 and 3!\n");
i--;
}


  
 }

if(Bilgisayar > Oyuncu ){
printf("The computer has won the game %d against %d \n",Bilgisayar,Oyuncu);
}
else if(Bilgisayar < Oyuncu ){
printf("You won the game %d against %d \n",Oyuncu,Bilgisayar);
}
else if(Bilgisayar =  Oyuncu ){
printf("There is no winner,drawn!\n");
}
return 0;
}
