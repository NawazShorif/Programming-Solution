# include <iostream>
# include <cstdio>
# include <cstring>
# define print  puts("No");
int main()
{
    int t,i,j,k,len;
    bool flag;
    char str[130],a[130],ch;
    scanf("%d%c",&t,&ch);
    for(k=0;k<t;k++)
    {
        flag  = false;
       gets(str);
       len = strlen(str);



             if(str[0]==')' || str[0]==']' || str[len-1]=='(' || str[len-1]=='[')
            {
                 print
                 continue;
            }


         if((len%2))
         print
         else
         {
         for(i=0,j=0;str[i];i++)
         {

           if(str[i]=='(' || str[i]=='[')
              a[j++]=str[i];
           else if(str[i]==')')
           {
               if(a[j-1]=='(')
                  j--;
               else
               {
                  flag = true;
                   break;
               }
           }
              else if(str[i]==']')
           {
               if(a[j-1]=='[')
                  j--;
               else
               {
                flag = true;
                  break;
               }
           }
         }
      if((!j && (a[j]=='[' || a[j]=='('))|| flag == false)
       puts("Yes");
     if(flag)
     print
         }

    }
    return 0;
}
