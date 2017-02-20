#include<stdio.h>
int main()
{
    long int lower_bound,upper_bound,n,big_cycle=0,cycle,temp;
    scanf("%ld %ld",&lower_bound,&upper_bound);
    for(n=lower_bound; n<=upper_bound; n++)
    {
        temp=n;
        cycle=1;
        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            cycle++;
        }
        if(cycle>big_cycle)
            big_cycle=cycle;
        n=temp;
    }
    printf("%ld %ld  %ld ",lower_bound,upper_bound,big_cycle);
    return 0;
}
