#include<iostream>
#include<cmath>
#include<cstdio>
#define pi acos(-1.0);
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        double n;
        scanf("%lf",&n);
        double a=n*n/25;
        double b=n*3/5;
        a*=pi;

        b=n*b-a;
        printf("%0.2lf %.2lf\n",a,b);
    }
    return 0;
}
