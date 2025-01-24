#include<stdio.h>
int fact(int);
int main()
{
   int  n;
   printf("enter a number:");
   scanf("%d",&n);
   printf("factroial is =%d",fact(n));
   return 0;
}
int fact(int n)
{
    if(n==0){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}