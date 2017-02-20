# include <stdio.h>
int gcd(int a,int b,int c)
{
    if(b)
    {
        if(!c)
        {
            printf("%d;",a/b);
            c++;
        }
        else
        {
            if(c==1)
            {
                printf("%d",a/b);
                c++;
            }
            else
            {
                printf(",%d",a/b);
            }
        }

        return gcd(b,a%b,c);
    }
}
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2)
    {
        c = 0;
        printf("[");
        gcd(a,b,c);
        puts("]");
    }
    return 0;
}
