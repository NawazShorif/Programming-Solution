#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i=0;
    long long a,b;
    while(  cin>>a>>b && i<test)
    {
        if(a>b)
            cout<<">\n";
        else if(a<b)
            cout<<"<\n";
        else if(a==b)
            cout<<"=\n";
        i++;
    }
    return 0;
}
