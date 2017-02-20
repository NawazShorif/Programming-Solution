#include<stdio.h>
int main(){
int i,j,sum,cary=0,temp;

for(i=0;i<10;i++){
    for(j=0;j<10;j++)
    {
        sum=i^(-j);
        temp=sum;
        cary=i&j;
        while(cary!=0){
            cary<<=1;
                sum=sum^(cary);
                cary=temp&cary;
                temp=sum;
        }
        printf("    %d",sum);

    }
    printf("\n");
}

return 0;
}
