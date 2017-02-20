#include<stdio.h>
int main(){
int i,j,sum,cary=0;

for(i=0;i<10;i++){
    for(j=0;j<10;j++)
    {
        sum=i^j;
        cary=i&j;
        while(cary!=0){
            cary>>=1;
                sum=sum^cary;
                cary=sum&cary;
        }
        printf("    %d",sum);

    }
    printf("\n");
}

return 0;
}
