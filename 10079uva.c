# include <stdio.h>
int main()
{
    long long n,p,q;
    while(scanf("%lld",&n)==1)
    {
        q = 0;
        for(p=2;p<=n;p++)
        {
          q = q+p;
        }
        q+=2;
        if(!n)
        printf("1\n");
        else
        printf("%lld\n",q);
    }
    return 0;
}
