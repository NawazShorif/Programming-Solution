#include<stdio.h>
__int64 Input_number,temp=0;
__int64 Revers_Input_number(__int64 Input_number)
{
    __int64 temp=0;
    while(Input_number!=0)
    {
        temp=temp*10+Input_number%10;
        Input_number=Input_number/10;
    }
    return temp;
}
int main()
{
    int Test_case,counter=0;
    __int64 Input_number,temp=0;
    scanf("%d",&Test_case);
    while(--Test_case)
    {
        scanf("%lld",&Input_number);
        temp=Revers_Input_number(Input_number);
        while(Input_number-temp!=0)
        {
            Input_number=Input_number+temp;
            temp=Revers_Input_number(Input_number);
            counter++;
        }
        printf("%d %lld\n",counter,Input_number);
    }
    return 0;
}
