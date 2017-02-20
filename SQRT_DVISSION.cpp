#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char input_valuebig[100],multiplecation[101];
    int carry=0,i,input_valuesmall;
    cout<<"Enter the input_valueBig & input_valueSmall\n";
    cin>>input_valuebig>>input_valuesmall;
    i=strlen(input_valuebig);
    while(i>0)
    {
        multiplecation[i]=((input_valuebig[i-1]-'0')*input_valuesmall+carry)%10+'0';
        carry=((input_valuebig[i-1]-'0')*input_valuesmall+carry)/10;
        i--;
    }
    if(carry==0)
        multiplecation[0]='0';
    else
        multiplecation[0]=carry+'0';
    for( i=0; i<=strlen(input_valuebig); i++)
        cout<<(multiplecation[i]);
    cout<<endl;

    return 0;
}
