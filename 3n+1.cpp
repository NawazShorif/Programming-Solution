#include<iostream>
using namespace std;
int main()
{
    int i,n,cycle=0,lower_limite,upper_limite;
    cin>>lower_limite;
    cin>>upper_limite;
    i=lower_limite;
    while(i<=upper_limite)
    {
        n=i;
        int cycle1=0;
        while(n!=1)
        {
            if(n%2==0)
                n/=2;
            else
                n=3*n+1;
            cycle1++;
        }
        if(cycle<cycle1)
            cycle=cycle1;
            i++;
    }
    cout<<cycle+1;
    return 0;
}
