#include <stdio.h>
int main()
{
    int i,x,n,p,r,a[50];
    FILE *f1;
    f1=fopen("a.txt","w");
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0; i<50; i++)
    {
        if(n>x)
        {
            r=n/x;
            a[i]=r;
            n=n%x;
        }
        if(n<x)
        {
            n=n*10;
            r=n/x;
            a[i]=r;
            n=n%x;
        }
    }
    for(i=0; i<50; i++)
    {
        fprintf(f1,"%d",a[i]);
    }
}
