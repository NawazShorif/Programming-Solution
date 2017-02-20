#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file=fopen("file.txt","w");

    int rem,num2,num1,i,n;
    printf("Enter num1 & num2\n");

    scanf("%d",&num1);
    scanf("%d",&num2);
    printf(" length you want??\n");
    scanf("%d",&n);
    fprintf(file,"%d",num1/num2);
    fprintf(file,".");
    rem=num1%num2;
    for(i=2;i<n;i++)
    {
        num1=rem*10;
        fprintf(file,"%d",num1/num2);
        rem=num1%num2;
    }
    fclose(file);
    return 0;
}
