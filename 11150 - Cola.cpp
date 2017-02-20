#include<iostream>
#include<cstdio>
int main()
{
    int a;
    while(scanf("%d",&a)==1 && a>0)
    {
        int store=0;
        while(a/3!=0)
        {
            store+=a/3;
            a=a%3+a/3;
        }
        if(a==2)
            store++;
        printf("%d\n",store);

    }
    return 0;
}
