#include<stdio.h>
#include<conio.h>
 void t(int n,char a,char b,char c){
    if(n==1){
        printf("\n%c -> %c\n",a,c);
    }
    else{
        t(n-1,a,c,b);
        t(1,a,b,c);
        t(n-1,b,a,c);
    }
 }
 int main()
 {

     int n;
     char a='a',b='b',c='c';
     printf("Enter your plate no: ");
     scanf("%d",&n);
     t(n,a,b,c);
     return 0;
 }
