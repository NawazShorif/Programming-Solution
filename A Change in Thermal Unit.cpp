#include<iostream>
#include<cstdio>
int main()
{
    int test;
    scanf("%d",&test);
    int i=1;
    double a,b;
    while(scanf("%lf%lf",&a,&b)==2 && i<=test)
    {
        b=9*a/5+b;
        a=b*5/9;
        printf("Case %d: %.2lf\n",i,a);
        i++;
    }
    return 0;
}
