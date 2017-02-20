#include<iostream>
#include<cstring>

#define M 100000
using namespace std;
char fact[1005][M];
void longFact(int n,char[]);
int main()
{
    char num[M];
    register int i,n,cdig;
    freopen("in.txt","r",stdin);
    longFact(1004,num);
    while(scanf("%d",&n)==1)
    {
        cdig=0;
        for(i=0;fact[n][i];i++)cdig=cdig+(fact[n][i]&15);
        printf("%d\n",cdig);
    }
    return 0;
}
void longFact(int n,char num[])
{
    int i,j,k,c,m;
    for(i=0;i<M;i++)num[i]='\0';
    num[0]='1';
    for(i=1;i<=n;i++)
        {
            c=0,k=0;
            for(j=0;num[j];j++)
                {
                    m=(num[j]&15)*i+c;
                    num[k++]=(m%10)|48;
                    c=m/10;
                }
            while(c)
                {
                    num[k++]=(c%10)|48;
                    c=c/10;
                }
            strcpy(fact[i],num);
        }
}
