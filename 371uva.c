# include <stdio.h>
int main()
{
    long long int i,a,b,count,sum,p=0,q,val,temp;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
        {
            temp=b;
            b= a;
            a= temp;
        }
        for(i=a; i<=b; i++)
        {
            val = i;
            count=0;
            while(1)
            {
                if((val%2))
                    val = val*3+1;
                else val /= 2;
                count++;
            }
            q = count;
            if(p < q)
            {
                p = q;
                sum = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,sum,p);

    }
    return 0;
}
