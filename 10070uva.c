#include<stdio.h>
int main(){
long int year;
while(scanf("%ld",&year)==1){
        if(year%4==0||year%15==0||year%55==0){
if(year%4==0||(year%100 ==0&& year%400==0))
    printf("This is leap year.\n");
if(year%15==0)
    printf("This is huluculu festival year.\n");
if(year%55==0)
    printf("This is Bulukulu festival year.\n");}
else
   printf("This is an ordinary year.\n");
printf("\n");
}
return 0;
}
