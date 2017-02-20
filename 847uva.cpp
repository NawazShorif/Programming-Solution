# include <stdio.h>
# include <iostream>
int main()
{
    long long n,t,k,p;
    bool flag;
 while(scanf("%lld",&n)!=EOF)
 {
     flag = true;
     p = 1;
    while(p<n)
    {
            if(!flag)
            {
                p*=2;
                flag = true;
            }
            else
            {
                p*=9;
                flag = false;
            }
    }
    if(flag) printf("Ollie wins.\n");
    else printf("Stan wins.\n");
 }
    return 0;
}
