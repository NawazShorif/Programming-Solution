#include<stdio.h>

int main()
{
    int n,a,rem=0,keep[5000];
    printf("Enter Divident and Divisor respectively");
    scanf("%d%d",&n,&a);
    FILE *f;
    f=fopen("noc.txt","w");
    fprintf(f,"Divident %d and Divisor %d\n",n,a);
    while(1)
    {
        if(n>a)
        {
            int r=n/a;
            fprintf(f,"%d",r);
            printf("%d",r);
            n%=a;
            if(n==0)
                break;
        }
        else if(n<a)
        {
            if(rem==0)
            {
                fprintf(f,".");
                printf(".");
                rem++;
            }
            n*=10;
        }

    }
    fclose(f);

    return 0;
}

