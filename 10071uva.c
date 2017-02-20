#include<stdio.h>
int main(){
int velocity,time;
while(scanf("%d%d",&velocity,&time)==2)
    printf("%d\n",velocity*time*2);
return 0;
}
