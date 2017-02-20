#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i=1;
    while(i<=test)
    {
        int n,max=0;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {
            int a;
            scanf("%d",&a);
            if(a>max)
                max=a;
        }
        printf("Case %d: %d\n",i,max);
        i++;
    }
    return 0;
}
