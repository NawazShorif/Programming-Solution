# include <stdio.h>
long long fibonacci(long long n)
{
    long long i,a=0,b=1;
       for(i=1;i<=n;i++)
         {
             b= a+b;
             a =b-a;
         }
    return b;
}
int main()
{
    long long n,p,q;

    while(scanf("%lld",&n) && n)
    {
          p = fibonacci(n);
         printf("%lld\n",p);

    }
    return 0;
}
