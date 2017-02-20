#include<stdio.h>
#define max 1001
#define len 2600
int num[max][len];
void fact()
{
int i,j;
num[0][0]=num[1][0]=1;
for(i=2;i<max;i++)
for(j=0;j<len;j++)
{
num[i][j]+=num[i-1][j]*i;
if(num[i][j]>9)
{
num[i][j+1]+=num[i][j]/10;
num[i][j]%=10;
}
}
}
int main()
{
int n,i;
fact();
//while(scanf("%d",&n)==1)
{
    n=1000;
printf("%d!\n",n);
for(i=len-1;i>0;i--)
if(num[n][i]!=0)break;
for(;i>=0;i--)printf("%d",num[n][i]);
printf("\n");
}
return 0;
}
