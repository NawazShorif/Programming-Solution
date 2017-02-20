#include<iostream>
using namespace std;
int main()
{
    int input_number,i,prime_array[100],j=2,n,k,count;
    prime_array[0]=2;
    prime_array[1]=3;
    cout<<"Enter the  number \n";
    cin>>input_number;
    for(i=5; i<=input_number; i++)
    {
        count=0;
        k=0;
        while(k<j)
        {
            if(i%prime_array[k]==0)
                count++;
            k++;
        }
        if(count==0)
        {
            prime_array[j]=i;
            j++;
        }
    }
    int prime_value_array[j-1];
    for(i=0; i<j; i++)
    {
        prime_value_array[i]=0;
        for(k=prime_array[i]; k<=input_number; k++)
        {
            n=k;
            while(n%prime_array[i]==0)
            {
                prime_value_array[i]++;
                n/=prime_array[i];
            }
        }
    }
    for(i=0; i<j; i++)
        cout<<prime_value_array[i]<<"  ";
    return 0;
}
