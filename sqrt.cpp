#include<iostream>
#include<cmath>
#include<cstring>
int multiplication(char x[],int y);
using namespace std;
int main()
{
    char input_valuebig[100];
    int input_valuesmall,multiplecation[101];
    cout<<"Enter the input_valueBig & input_valueSmall\n";
    cin>>input_valuebig>>input_valuesmall;
 multiplecation[]=multiplication(input_valuebig,input_valuesmall);
}

int multiplication(char input_valuebig[],int input_valuesmall){
   int i,multiplecation[101],carry=0;
   i=strlen(input_valuebig);
    while(i>0)
    {
        if(input_valuebig[i-1]!=46){
        multiplecation[i]=((input_valuebig[i-1]-'0')*input_valuesmall+carry)%10;
        carry=((input_valuebig[i-1]-'0')*input_valuesmall+carry)/10;
        i--;}
        else
        {
            multiplecation[i]=46;
            i--;
        }
    }
    if(carry==0)
        multiplecation[0]=0;
    else
        multiplecation[0]=carry;
    for( i=0; i<=strlen(input_valuebig); i++)
    {
        if(multiplecation[i]!=46)
        cout<<(multiplecation[i]);
        else {
            cout<<".";
            i++;
        }
    }
    cout<<endl;
        return multiplecation[];

}
