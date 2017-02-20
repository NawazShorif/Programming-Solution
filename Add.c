#include<stdio.h>
int caryy(int sum,int cary)
{
    return(sum&cary);
}
int main()
{
    int i,j,sum,cary=0,temp;
    while(scanf("%d %d",&i,&j)==2)
    {
        sum=i^j;
        temp=sum;
        cary=caryy(i,j);
        while(cary!=0)
        {
            cary<<=1;
            sum=sum^cary;
            cary=caryy(temp,cary);
            temp=sum;
        }
        printf("    %d",sum);
    }
    return 0;
}
