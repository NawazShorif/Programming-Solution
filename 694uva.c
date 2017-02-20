# include <stdio.h>
# define max printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",i,a,b,count);
int main()
{
    int i;
    long a,b,count,val;
    for(i=1; scanf("%lld %lld",&a,&b) && (a>0 && b>0); i++)
    {
        val = a;
        count = 0;
        while(1)
        {
            if(val==1)
            {
                count++;
                max
                break;
            }
            if((val%2))
            {
                val = val*3+1;
                count++;
            }
            else
            {
                val /= 2;
                count++;
            }
            if (val>b)
            {
                max
                break;
            }
        }
    }
    return 0;
}
